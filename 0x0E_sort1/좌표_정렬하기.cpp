#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main() {
    ios::sync_with_stdio();
    cin.tie(0);
    cin >> n;
    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    } 

    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i.first << " " << i.second << "\n";
    }
}