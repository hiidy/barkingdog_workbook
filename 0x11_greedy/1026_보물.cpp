#include <bits/stdc++.h>

using namespace std;

int n;
int a[101];
int b[101];

bool compare(int a, int b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n, compare);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i] * b[i];
    }

    cout << ans;

}