#include <iostream>

using namespace std;

int n;
int freq[2002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[1000 + a]++;
    }

    for (int i = 0; i <= 2000; i++) {
        while (freq[i]) {
            cout << i - 1000 << "\n";
            freq[i]--;
        }
    }
}