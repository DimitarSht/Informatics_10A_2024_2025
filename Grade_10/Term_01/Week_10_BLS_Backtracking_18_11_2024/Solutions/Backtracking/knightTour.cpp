#include <iostream>
using namespace std;

#define N 8

bool isSafe(int x, int y, int sol[N][N]) {
    return x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1;
}

void printSolution(int sol[N][N]) {
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            cout << sol[x][y] << " ";
        }
        cout << endl;
    }
}

bool solveKnightTourUtil(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]) {
    if (movei == N * N) return true;

    for (int k = 0; k < 8; k++) {
        int nextX = x + xMove[k];
        int nextY = y + yMove[k];
        if (isSafe(nextX, nextY, sol)) {
            sol[nextX][nextY] = movei;
            if (solveKnightTourUtil(nextX, nextY, movei + 1, sol, xMove, yMove)) return true;
            sol[nextX][nextY] = -1; // backtrack
        }
    }
    return false;
}

bool solveKnightTour() {
    int sol[N][N];
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    sol[0][0] = 0;

    if (!solveKnightTourUtil(0, 0, 1, sol, xMove, yMove)) {
        cout << "Solution does not exist" << endl;
        return false;
    } else {
        printSolution(sol);
    }
    return true;
}

int main() {
    solveKnightTour();
    return 0;
}
