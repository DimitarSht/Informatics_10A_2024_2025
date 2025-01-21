#include <iostream>
using namespace std;

bool isSafe(int maze[5][5], int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1;
}

bool solveMaze(int maze[5][5], int x, int y, int sol[5][5], int n) {
    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y, n)) {
        sol[x][y] = 1;
        if (solveMaze(maze, x + 1, y, sol, n)) return true;
        if (solveMaze(maze, x, y + 1, sol, n)) return true;
        sol[x][y] = 0; // backtrack
    }
    return false;
}

void printSolution(int sol[5][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int maze[5][5] = {
        {1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 0, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 1, 1}
    };
    int n = 5;
    int sol[5][5] = {0};

    if (solveMaze(maze, 0, 0, sol, n)) {
        printSolution(sol, n);
    } else {
        cout << "No solution exists." << endl;
    }
    return 0;
}
