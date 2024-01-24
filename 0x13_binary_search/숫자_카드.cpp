#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int arr[500002];

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
        cout << binary_search(arr, arr + n, num) << ' ';
    }
}