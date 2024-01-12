#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    ios::sync_with_stdio();
    cin.tie();
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i.second << ' ' << i.first << '\n';
    }
}