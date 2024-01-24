#include <iostream>
#include <string>

using namespace std;

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    cin >> input;
    bool minus = 0;
    int tmp = 0;
    int ans = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-' || input[i] == '+') {
            if (minus) {
                ans -= tmp;
                tmp = 0;
            } else {
                ans += tmp;
                tmp = 0;
            }
        } else {
            tmp = tmp * 10;
            tmp += input[i] - '0';
        }
        if (input[i] == '-') {
            minus = 1;
        }
    }
    if (minus) {
        ans -= tmp;
        tmp = 0;
    } else {
        ans += tmp;
        tmp = 0;
    }
    cout << ans;
}