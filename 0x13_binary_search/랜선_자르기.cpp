#include <algorithm>
#include <iostream>
#define ll long long

using namespace std;

int arr[10002];

int k, n;

ll solve(int mid) {
    ll cnt = 0;
    for (int i = 0; i < k; i++) {
        cnt += arr[i] / mid;
    }
    return cnt;
}

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    ll st = 1;
    ll en = *max_element(arr, arr + k);
    while (st < en) {
        ll mid = (st + en + 1) / 2;
        if (solve(mid) >= n) {
            st = mid;
        } else {
            en = mid - 1;
        }
    }
    cout << st;
}