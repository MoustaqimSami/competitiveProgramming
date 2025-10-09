#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int current_leader = arr[arr.size() - 1];
    leaders.insert(leaders.begin(), current_leader);

    for (int i = arr.size() - 2; i >= 0; --i){
        if (arr[i] >= current_leader) {
            current_leader = arr[i];
            leaders.insert(leaders.begin(), current_leader);
        }
    }

    return leaders;
}

int main() {
    vector<vector<int>> testCases = {
        {16, 17, 4, 3, 5, 2},
        {10, 4, 2, 4, 1},
        {5, 10, 20, 40},
        {30, 10, 10, 5}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<int> arr = testCases[i];
        vector<int> result = leaders(arr);

        cout << "Test case " << i + 1 << ": ";
        for (int x : result) cout << x << " ";
        cout << endl;
    }
}