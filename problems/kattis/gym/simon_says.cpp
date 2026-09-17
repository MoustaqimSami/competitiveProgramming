#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string a;
    getline(cin, a); // consume the newline after n

    for (int i = 0; i < n; i++) {
        string s; 
        getline(cin, s);
        stringstream ss(s);
        string word;
        ss >> word;
        if (word == "Simon") {
            ss >> word;
            if (word == "says") {
                cout << s.substr(11) << endl;
            }
        }
    }
}