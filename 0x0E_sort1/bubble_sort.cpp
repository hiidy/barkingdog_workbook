#include <iostream>

using namespace std;

int main() {
    int arr[5] = {3, 2, 7, 1, 23};
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (auto i : arr) {
        cout << i << " ";
    }
}