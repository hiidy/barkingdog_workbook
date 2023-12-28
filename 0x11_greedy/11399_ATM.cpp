#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[1002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        tmp += arr[i];
        ans += tmp;
    }
    cout << ans;
}