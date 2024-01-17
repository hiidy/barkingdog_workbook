#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vector<string> v;

    for (int i = 0; i < s.length(); i++) {
        string tmp = s.substr(i);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (auto s : v) {
        cout << s << '\n';
    }
}