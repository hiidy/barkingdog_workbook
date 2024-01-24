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
    cin >> m;
    sort(arr, arr + n);
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        cout << upper_bound(arr, arr + n, a) - lower_bound(arr, arr + n, a)
             << ' ';
    }
}