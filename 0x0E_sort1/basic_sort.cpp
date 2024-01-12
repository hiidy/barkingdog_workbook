#include <iostream>

using namespace std;

int main() {
    int arr[5] = {3, 2, 7, 1, 23};
    int n = 5;
    for (int i = n - 1; i > 0; i--) {
        int max_idx = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }

    for (auto nxt : arr) {
        cout << nxt << " ";
    }
}