#include <bits/stdc++.h>

using namespace std;

int n;
pair<int, int> arr[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].second >> arr[i].first;
    }

    sort(arr, arr + n);

    int ans = 0;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i].second < cur) {
            continue;
        }
        cur = arr[i].first;
        ans++;
    }

    cout << ans;
}