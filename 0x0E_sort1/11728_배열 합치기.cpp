#include <iostream>

using namespace std;

int a[1000002];
int b[1000002];
int c[1000002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int aidx = 0;
    int bidx = 0;

    for (int i = 0; i < n + m; i++) {
        if (aidx == n) {
            c[i] = b[bidx++];
        } else if (bidx == m) {
            c[i] = a[aidx++];
        } else if (a[aidx] >= b[bidx]) {
            c[i] = b[bidx++];
        } else {
            c[i] = a[aidx++];
        }
    }
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
}