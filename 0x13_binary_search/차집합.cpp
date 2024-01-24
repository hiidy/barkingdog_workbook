#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, m; // n = A , m = B
int A[500002];
int B[500002];
vector<int> v;

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    sort(A, A + n); 
    sort(B, B + m);

    for (int i = 0; i < n; i++) {
        if (!binary_search(B, B + m, A[i])) {
            v.push_back(A[i]);
        }
    }

    int cnt = v.size();
    if (cnt > 0) {
        cout << cnt << '\n';
        for (auto i : v) {
            cout << i << ' ';
        }
    } else {
        cout << cnt;
    }
}