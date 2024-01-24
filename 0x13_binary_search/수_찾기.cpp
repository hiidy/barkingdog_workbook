#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int arr[100002];

int binarySerach(int num) {
    int st = 0;
    int en = n - 1;
    while (st <= en) {
        int mid = (st + en + 1) / 2;
        if (num < arr[mid]) {
            en = mid - 1;
        } else if (num > arr[mid]) {
            st = mid + 1;
        } else {
            return 1;
        }
    }
    return 0;
}

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> m;

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        cout << binarySerach(num) << '\n';
    }
}