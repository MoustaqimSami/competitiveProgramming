#include<bits/stdc++.h>
using namespace std;
int main() {
    double R;
    int n;
    cin >> R >> n;

    const double PI = acos(-1);
    cout << fixed << setprecision(12);

    const double full_area = 4 * PI * R * R;

    while (n--)
    {
        int r; cin >> r;

        if (r >= PI * R) {
            cout << full_area << endl;
        } else {
            long double theta = r / R;
            long double area = 2 * PI * R * R * (1 - cos(theta));
            cout << area << endl;
        }

    }
    
}