#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int countBefore = 0;
    int countAfter = 0;
    bool insideParentheses = false;
    bool closedParentheses = false;

    for (char c : s) {
        if (c == '(') {
            insideParentheses = true;
        } 
        else if (c == ')') {
            insideParentheses = false;
            closedParentheses = true;
        } 
        else if (c == '|') {
            if (insideParentheses) {
                cout << "fix\n";
                return 0;
            }

            if (closedParentheses) {
                countAfter++;
            } else {
                countBefore++;
            }
        }
    }

    if (!closedParentheses || countBefore != countAfter) {
        cout << "fix\n";
    } else {
        cout << "correct\n";
    }

    return 0;
}