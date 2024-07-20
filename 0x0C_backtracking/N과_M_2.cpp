#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
bool isUsed[10];
int arr[10];

void backtracking(int k) {
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return ;
    }

    for (int i = 1; i <= n; i++) {
        if (isUsed[i] || arr[k - 1] > i) {
            continue;
        }
        isUsed[i] = true;
        arr[k] = i;
        backtracking(k + 1);
        isUsed[i] = false;
    }
}

int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    backtracking(0);

}