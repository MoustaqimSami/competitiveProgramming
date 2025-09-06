#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    string reversed;

    for (int i = 0; i < str.size(); ++i){
        reversed += str[str.size() - 1 - i];
    }

    if (reversed == str) cout << "YES";
    else cout << "NO";
}