#include <bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();

        vector<int> boundary;

        if (r == 1){
            return mat[0];
        }

        if (c == 1) {
            for (int i = 0; i < r; ++i) boundary.push_back(mat[i][0]);
            return boundary;
        }

        for (int i = 0; i < c; ++i){
            boundary.push_back(mat[0][i]);
        }
        for (int i = 1; i < r; ++i){
            boundary.push_back(mat[i][c - 1]);
        }
        for (int i = c - 2; i >= 0; --i){
            boundary.push_back(mat[r - 1][i]);
        }
        for (int i = r - 2; i >= 1; --i){
            boundary.push_back(mat[i][0]);
        }
        
        return boundary;
    }

int main() {
    vector<vector<vector<int>>> testCases = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}},
        {{12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3, 2, 1}},
        {{12, 11}, {4, 3}},
        {{1, 2, 3, 4}}
    };

    vector<vector<int>> expected = {
        {1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5},
        {12, 11, 10, 9, 5, 1, 2, 3, 4, 8},
        {12, 11, 3, 4},
        {1, 2, 3, 4}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<int> result = boundaryTraversal(testCases[i]);
        cout << "Test case " << i + 1 << ": ";
        for (int x : result) cout << x << " ";
        cout << "\nExpected: ";
        for (int x : expected[i]) cout << x << " ";
        cout << "\nIs correct? " << (result == expected[i] ? "Yes" : "No") << "\n\n";
    }
}