#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    scanf("%d", &num);                    // Reading input from STDIN

    for (int i = 0; i < num; ++i){
        int x;
        scanf("%d", &x);

        for (int j = 0; j < x; ++j){

            // Print Prefix Stars
            for (int p = 0; p <= j; ++p){
                cout << "*";
            }

            // Print #
            for (int h = 1; h < (x - j); ++h){
                cout << "##";
            }

            // Print Suffix Stars
            for (int s = 0; s <= j; ++s){
                cout << "*";
            }

            cout << endl;
        }

        cout << endl;
    }
}