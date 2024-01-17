#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> v;

bool comp(string &a, string &b) {
    int a_len = a.length();
    int b_len = b.length();
    if (a_len != b_len) {
        return a_len < b_len;
    }

    int a_sum = 0;
    int b_sum = 0;
    for (int i = 0; i < a_len; i++) {
        if (isdigit(a[i])) {
            a_sum += a[i] - '0';
        }
        if (isdigit(b[i])) {
            b_sum += b[i] - '0';
        }
    }
    if (a_sum != b_sum) {
        return a_sum < b_sum;
    } else {
        return a < b;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), comp);

    for (string s : v) {
        cout << s << '\n';
    }
}