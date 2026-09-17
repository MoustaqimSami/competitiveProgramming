#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int count = 0;
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (tolower(s[i]) == 'a' || tolower(s[i] == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')){
            count++;
        }
    }
    
    cout << count << endl;
}