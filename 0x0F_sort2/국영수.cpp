#include <bits/stdc++.h>

using namespace std;

vector<pair<string, tuple<int, int, int>>> v;

bool comp(pair<string, tuple<int, int, int>> &a,
          pair<string, tuple<int, int, int>> &b) {
    if (get<0>(a.second) != get<0>(b.second)) {
        return get<0>(a.second) > get<0>(b.second);
    } else if (get<1>(a.second) != get<1>(b.second)) {
        return get<1>(a.second) < get<1>(b.second);
    } else if (get<2>(a.second) != get<2>(b.second)) {
        return get<2>(a.second) > get<2>(b.second);
    } else {
        return a.first < b.first;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int a, b, c;
        cin >> name >> a >> b >> c;
        v.push_back({name, {a, b, c}});
    }

    sort(v.begin(), v.end(), comp);

    for (auto i : v) {
        cout << i.first << '\n';
    }
}