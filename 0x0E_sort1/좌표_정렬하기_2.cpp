#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio();
    cin.tie();
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), compare);
    for (auto i : v) {
        cout << i.first << ' ' << i.second << '\n';
    }
}