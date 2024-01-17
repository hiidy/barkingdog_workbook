#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll ans_num = 0;
    ll cur_num = v.front();
    int cnt = 0;
    int mx_cnt = 0;
    sort(v.begin(), v.end());
    for (ll num : v) {
        if (num != cur_num) {
            if (cnt > mx_cnt) {
                ans_num = cur_num;
                mx_cnt = cnt;
            }
            cur_num = num;
            cnt = 0;
        }
        cnt++;
    }
    if (cnt > mx_cnt) {
        ans_num = cur_num;
        mx_cnt = cnt;
    }

    cout << ans_num;
}