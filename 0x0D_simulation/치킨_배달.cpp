#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define X first
#define Y second

using namespace std;

int board[52][52];
vector<pair<int, int>> chicken;
vector<pair<int, int>> house;


int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1) {
                house.push_back({i, j});
            }
            if (board[i][j] == 2) {
                chicken.push_back({i, j});
            }
        }
    }
    vector<int> comb(chicken.size(), 1);
    fill(comb.begin(), comb.begin() + chicken.size() - m, 0);

    int min_dist = 0x3f3f3f3f;

    do {
        int sum_dist = 0;
        for (auto h : house) {
            int house_dist_min = 0x3f3f3f3f;
            for (int i = 0; i < chicken.size(); i++) {
                if (comb[i] == 0) {
                    continue;
                }
                int tmp_dist = abs(h.X - chicken[i].X) + abs(h.Y - chicken[i].Y);
                house_dist_min = min(tmp_dist, house_dist_min);
            }
            sum_dist += house_dist_min;
        }
        min_dist = min(sum_dist, min_dist);
    } while (next_permutation(comb.begin(), comb.end()));

    cout << min_dist;

}