#include <iostream>
using namespace std;

void generateParentheses(int open, int close, char str[], int pos) {
    if (open == 0 && close == 0) {
        str[pos] = '\0';
        cout << str << endl;
        return;
    }

    if (open > 0) {
        str[pos] = '(';
        generateParentheses(open - 1, close, str, pos + 1);
    }

    if (close > open) {
        str[pos] = ')';
        generateParentheses(open, close - 1, str, pos + 1);
    }
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    char str[2 * n + 1];
    generateParentheses(n, n, str, 0);

    return 0;
}
