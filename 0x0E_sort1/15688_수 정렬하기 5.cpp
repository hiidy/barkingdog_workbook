#include <iostream>

using namespace std;

int freq[2000002];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[1000000 + a]++;
    }
    for (int i = 0; i <= 2000000; i++) {
        while (1) {
            if (freq[i] == 0) {
                break;
            }
            cout << i - 1000000 << "\n";
            freq[i]--;
        }
    }
}