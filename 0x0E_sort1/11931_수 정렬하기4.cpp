#include <bits/stdc++.h>

using namespace std;

int n;
int arr[2000002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a + 1000000]++;
    }

    for (int i = 2000000; i >= 0; i--) {
        while (arr[i]) {
            cout << i - 1000000 << '\n';
            arr[i]--;
        }
    }
}