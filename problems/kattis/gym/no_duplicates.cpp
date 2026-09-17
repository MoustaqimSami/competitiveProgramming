#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);

    map<string, int> wordCount;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        if (wordCount[word] > 0) {
            cout << "no\n";
            return 0;
        } else {
            wordCount[word]++;
        }
    }
    cout << "yes\n";
}