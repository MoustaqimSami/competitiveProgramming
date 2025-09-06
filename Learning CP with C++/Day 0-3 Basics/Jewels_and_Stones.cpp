#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
	
	for (int i = 0; i < t; ++i){
	    string stone, jewel;
	    getline(cin, jewel);
	    getline(cin, stone);
	    
	    
	    int count = 0;
	    
	    for (int s = 0; s < stone.size(); ++s){
	        for (int j = 0; j < jewel.size(); ++j){
	            if (stone[s] == jewel[j]) {
	                count++;
	                stone.erase(s, 1);
	                --s;
	            }
	        }
	    }
	    
	    cout << count << endl;
	}

}
