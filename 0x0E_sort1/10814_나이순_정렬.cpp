#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio();
    cin.tie(0);
    cin >> n;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end(), compare);
    for (pair<int, string> i : v) {
        cout << i.first << " " << i.second << "\n";
    }
}