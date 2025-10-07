#include <bits/stdc++.h>
using namespace std;

void insertAtEnd(vector<int>& v, int val) {
        v.push_back(val);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int val = 90;

    insertAtEnd(v, val);

    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}
