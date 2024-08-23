#include <iostream>
#include <algorithm>

using namespace std;

int h, x;
int arr[502];
int ans = 0;

int leftMax(int idx) {
    int leftMax = 0;
    for (int i = 0; i < idx; i++) {
        leftMax = max(leftMax, arr[i]);
    }
    return leftMax;
}

int rightMax(int idx) {
    int rightMax = 0;
    for (int i = idx + 1; i < x; i++) {
        rightMax = max(rightMax, arr[i]);
    }
    return rightMax;
}


int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> h >> x;
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++) {
        if (i == 0 || i == x - 1) {
            continue;
        }
        
        if (arr[i] > leftMax(i) || arr[i] > rightMax(i)) {
            continue;
        }

        if (leftMax(i) == 0 || rightMax(i) == 0) {
            continue;
        }

        int minH = min(leftMax(i), rightMax(i));
        
        ans += minH - arr[i];
    }
    cout << ans;
    
}