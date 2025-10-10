#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// Assumes it's a square matrix
vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int r = mat.size();
        for (int i = 0; i < r; ++i){
            for (int j = i + 1; j < r; ++j){
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        return mat;
    }

int main() {
    vector<vector<vector<int>>> testCases = {
        {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}},
        {{1, 2}, {9, -2}}
    };

    vector<vector<vector<int>>> expected = {
        {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}},
        {{1, 9}, {2, -2}}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<vector<int>> mat = testCases[i];
        vector<vector<int>> result = transpose(mat);

        cout << "Test case " << i + 1 << ":\n";
        for (auto &row : result) {
            for (int x : row) cout << x << " ";
            cout << endl;
        }
        cout << "Expected:\n";
        for (auto &row : expected[i]) {
            for (int x : row) cout << x << " ";
            cout << endl;
        }
        cout << "Is correct? " << (result == expected[i] ? "Yes" : "No") << "\n\n";
    }
}