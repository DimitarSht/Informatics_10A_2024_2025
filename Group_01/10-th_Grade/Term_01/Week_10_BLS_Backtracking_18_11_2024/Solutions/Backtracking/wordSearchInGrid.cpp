#include <iostream>
#include <cstring>
using namespace std;

bool isSafe(char grid[4][4], int x, int y, bool visited[4][4], char word[], int index) {
    return x >= 0 && x < 4 && y >= 0 && y < 4 && !visited[x][y] && grid[x][y] == word[index];
}

bool wordSearchUtil(char grid[4][4], int x, int y, bool visited[4][4], char word[], int index) {
    if (index == strlen(word)) return true;

    if (!isSafe(grid, x, y, visited, word, index)) return false;

    visited[x][y] = true;

    // Check all 8 directions
    int rowDir[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int colDir[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    for (int dir = 0; dir < 8; dir++) {
        if (wordSearchUtil(grid, x + rowDir[dir], y + colDir[dir], visited, word, index + 1)) {
            return true;
        }
    }

    visited[x][y] = false; // backtrack
    return false;
}

bool wordSearch(char grid[4][4], char word[]) {
    bool visited[4][4] = {false};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (grid[i][j] == word[0] && wordSearchUtil(grid, i, j, visited, word, 0)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    char grid[4][4] = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'},
        {'A', 'E', 'E', 'F'}
    };
    char word[] = "SEE";

    if (wordSearch(grid, word)) {
        cout << "Word found!" << endl;
    } else {
        cout << "Word not found!" << endl;
    }
    return 0;
}
