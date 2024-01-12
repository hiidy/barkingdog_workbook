#include <iostream>

using namespace std;

int n;
int freq[10002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (freq[i]) {
            cout << i << '\n';
            freq[i]--;
        }
    }
}