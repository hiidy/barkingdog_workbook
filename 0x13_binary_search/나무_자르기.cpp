#include <algorithm>
#include <iostream>
#define ll long long

using namespace std;

int n, m;
int arr[1000002];

bool solve(ll mid) {
    ll cur = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= mid) {
            cur += (arr[i] - mid);
        }
    }
    return cur >= m;
}

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll st = 0;
    ll en = *max_element(arr, arr + n);
    while (st < en) {
        ll mid = (st + en + 1) / 2;
        if (solve(mid)) {
            st = mid;
        } else {
            en = mid - 1;
        }
    }
    cout << st;
}