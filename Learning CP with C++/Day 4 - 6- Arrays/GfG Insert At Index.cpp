#include <bits/stdc++.h>
using namespace std;

void insertAtIndex(vector<int> &arr, int index, int val)
{
    arr.push_back(0);
    for (int i = arr.size() - 2; i > index; --i){
        arr[i + 1] = arr[i];
    }

    arr[index] = val;
}

int main()
{
    vector<pair<vector<int>, pair<int, int>>> testCases = {
        {{1, 2, 3, 4, 5}, {5, 90}}, // Insert 90 at index 5
        {{1, 2, 3, 4, 5}, {2, 90}}, // Insert 90 at index 2
        {{1}, {0, 42}},              // Insert 42 at index 0
        {{1, 2, 3}, {1, 99}}         // Insert 99 at index 1
    };

    for (int i = 0; i < testCases.size(); ++i) {
        vector<int> arr = testCases[i].first;
        int index = testCases[i].second.first;
        int val = testCases[i].second.second;

        insertAtIndex(arr, index, val);

        cout << "Test case " << i + 1 << ": ";
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
}