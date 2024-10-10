#include <iostream>
#include <string>
using namespace std;

bool isBalanced(const string expression, int start, int end) {
    int openCount = 0;
    int maxOpenCount = 0;
    start = -1;
    end = -1;

    for (int i = 0; i < expression.length(); ++i) {
        if (expression[i] == '(') {
            if (start == -1) {
                start = i;
            }
            openCount++;
            if (openCount > maxOpenCount) {
                maxOpenCount = openCount;
                start = i;
            }
        } else if (expression[i] == ')') {
            openCount--;
            if (openCount == 0) {
                end = i;
                return true;
            }
        }
    }

    return false;
}

int main() {
    string expression;
    cout << "Enter expression: ";
    cin >> expression;

    int start, end;
    bool balanced = isBalanced(expression, start, end);

    if (balanced) {
        cout << "true\n";
        cout << "Position of most inner opening bracket: " << start << endl;
        cout << "Position of most inner closing bracket: " << end << endl;
    } else {
        cout << "false\n";
    }

    return 0;
}
