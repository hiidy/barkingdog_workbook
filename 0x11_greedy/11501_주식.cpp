#include <bits/stdc++.h>

using namespace std;

int t;
int arr[1000002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--) {
        int n;
        long long ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max_value = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] > max_value) {
                max_value = arr[i];
            } else {
                ans += (max_value - arr[i]);
            }
        }
        cout << ans << "\n";
    }
}