#include <iostream>
using namespace std;

bool isSafe(int board[][10], int row, int col, int n) {
    for (int i = 0; i < col; i++)
        if (board[row][i]) return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;
    for (int i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j]) return false;
    return true;
}

bool solveNQueens(int board[][10], int col, int n) {
    if (col >= n) return true;
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            if (solveNQueens(board, col + 1, n)) return true;
            board[i][col] = 0; // backtrack
        }
    }
    return false;
}

void printBoard(int board[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    int board[10][10] = {0};
    if (solveNQueens(board, 0, n)) {
        printBoard(board, n);
    } else {
        cout << "No solution exists for N = " << n << endl;
    }
    return 0;
}
