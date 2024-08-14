#include <iostream>
#include <algorithm>

using namespace std;

int n;
int result = 0;
int board[21][21];

void move(int board[21][21]) {
    int tmpBoard[21][21] = {0};
    for (int i = 0; i < n; i++) {
        int idx = 0;
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0) {
                continue;
            }
            if (tmpBoard[i][idx] == 0) {
                tmpBoard[i][idx] = board[i][j];
            } else if (tmpBoard[i][idx] == board[i][j]) {
                tmpBoard[i][idx++] *= 2;
            } else {
                tmpBoard[i][++idx] = board[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = tmpBoard[i][j];
        }
    }
}

void findMax(int board[21][21]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result = max(result, board[i][j]);
        }
    }
}

void rotate(int board[21][21]) {
    int tmpBoard[21][21];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmpBoard[i][j] = board[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = tmpBoard[n - 1 - j][i];
        }
    }
}


void dfs(int board[21][21], int depth) {
    if (depth == 5) {
        findMax(board);
        return;
    }

    int tmpBoard[21][21];
    for (int dir = 0; dir < 4; dir++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                tmpBoard[i][j] = board[i][j];
            }
        }
        move(tmpBoard);
        dfs(tmpBoard, depth + 1);
        rotate(board);
    }

}

int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    

    dfs(board, 0);
    cout << result;
}