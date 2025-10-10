#include <bits/stdc++.h>
using namespace std;
vector<int> snakePattern(vector<vector<int>> matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> pattern;

        for (int i = 0; i < r; ++i){
            if (i % 2 == 0) {
                for (int j = 0; j < matrix[i].size(); ++j){
                    pattern.push_back(matrix[i][j]);
                }
            }
            else {
                for (int j = matrix[i].size() - 1; j >= 0; --j){
                    pattern.push_back(matrix[i][j]);
                }
            }
        }
        return pattern;
    }

int main() {
    vector<vector<vector<int>>> testCases = {
        {{45, 48, 54}, {21, 89, 87}, {70, 78, 15}},
        {{1, 2}, {3, 4}}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<int> result = snakePattern(testCases[i]);
        cout << "Test case " << i + 1 << ": ";
        for (int x : result) cout << x << " ";
        cout << endl;
    }
}