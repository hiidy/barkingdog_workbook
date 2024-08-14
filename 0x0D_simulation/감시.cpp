#include <bits/stdc++.h>

using namespace std;

int board[9][9];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int ans = 0x3f3f3f3f;
vector<pair<int, int>> cctv_pos;

void fill_board(int x, int y, int direction, int board[][9]) {
    direction %= 4;
    int nx = x;
    int ny = y;
    while (true) {
        nx += dx[direction];
        ny += dy[direction];
        if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            return;
        if (board[nx][ny] == 6)
            return;
        if (board[nx][ny] == 0) {
            board[nx][ny] = -1;
        }
    }
}

void copy_board(int tmp[][9], int board[][9]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tmp[i][j] = board[i][j];
        }
    }
}

void backtracking(int cctv_index, int board[][9]) {

    if (cctv_index == cctv_pos.size()) {
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 0) {
                    cnt++;
                }
            }
        }
        ans = min(ans, cnt);
        return;
    }

    int cctv_x = cctv_pos[cctv_index].first;
    int cctv_y = cctv_pos[cctv_index].second;
    int cctv_number = board[cctv_x][cctv_y];

    for (int i = 0; i < 4; i++) {
        int tmp_board[9][9];
        copy_board(tmp_board, board);
        if (cctv_number == 1) {
            fill_board(cctv_x, cctv_y, i, tmp_board);
        }
        if (cctv_number == 2) {
            fill_board(cctv_x, cctv_y, i, tmp_board);
            fill_board(cctv_x, cctv_y, i + 2, tmp_board);
        }
        if (cctv_number == 3) {
            fill_board(cctv_x, cctv_y, i, tmp_board);
            fill_board(cctv_x, cctv_y, i + 1, tmp_board);
        }
        if (cctv_number == 4) {
            fill_board(cctv_x, cctv_y, i, tmp_board);
            fill_board(cctv_x, cctv_y, i + 1, tmp_board);
            fill_board(cctv_x, cctv_y, i + 2, tmp_board);
        }
        if (cctv_number == 5) {
            fill_board(cctv_x, cctv_y, i, tmp_board);
            fill_board(cctv_x, cctv_y, i + 1, tmp_board);
            fill_board(cctv_x, cctv_y, i + 2, tmp_board);
            fill_board(cctv_x, cctv_y, i + 3, tmp_board);
        }
        backtracking(cctv_index + 1, tmp_board);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || board[i][j] == 6) {
                continue;
            }
            cctv_pos.push_back({i, j});
        }
    }
    backtracking(0, board);
    cout << ans;
}