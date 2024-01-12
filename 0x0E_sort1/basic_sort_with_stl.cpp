#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[5] = {3, 2, 7, 1, 23};
    int n = 5;
    
    for (int i = n - 1; i > 0; i--) {
        swap(arr[i], *max_element(arr, arr + i + 1));
    }

    for (auto nxt : arr) {
        cout << nxt << " ";
    }
}