#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool comp(string &a, string &b) {
    int a_size = a.length();
    int b_size = b.length();
    if (a_size != b_size) {
        return a_size < b_size;
    } else {
        return a < b;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), comp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto s : v) {
        cout << s << '\n';
    }
}