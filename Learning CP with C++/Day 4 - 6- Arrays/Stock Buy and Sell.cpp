#include <bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int> &arr) {
    int profit = 0;
    int size = arr.size();

    for (int i = 1; i < size; ++i){
        if (arr[i] > arr[i - 1]) profit += (arr[i] - arr[i - 1]);
    }

    return profit;    
}

int main() {
    vector<vector<int>> testCases = {
        {100, 180, 260, 310, 40, 535, 695},
        {4, 2, 2, 2, 4},
        {4, 2}
    };

    vector<int> expected = {865, 2, 0};

    for (int i = 0; i < testCases.size(); ++i) {
        int result = stockBuySell(testCases[i]);
        cout << "Test case " << i+1 << ": ";
        for (int price : testCases[i]) cout << price << " ";
        cout << "\nExpected: " << expected[i] << ", Got: " << result << "\n\n";
    }
}