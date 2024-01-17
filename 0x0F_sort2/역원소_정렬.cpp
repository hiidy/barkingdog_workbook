#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long

using namespace std;

ll reverseNum(ll num) {
    ll reversed = 0;
    while (num) {
        int digit = num % 10;
        reversed = digit + reversed * 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        ll num = reverseNum(a);
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    for (ll i : v) {
        cout << i << '\n';
    }
}
