#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    long num = 1;
    long num2 = 1;
    for (int i = 57; i <= 64; i++) {
        num *= i;
    }

    for (int i = 1; i <= 8; i++) {
        num2 *= i;
    }

    cout << num / num2;
}