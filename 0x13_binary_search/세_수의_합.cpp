#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[1005];
vector<int> v;

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = arr[i] + arr[j];
            v.push_back(sum);
        }
    }

    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (binary_search(v.begin(), v.end(), arr[i] - arr[j])) {
                ans = max(ans, arr[i]);
            }
        }
    }
    cout << ans;
}