#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        arr.push_back(m);
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    int price = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 3 != 0)
        {
            price += arr[i];
        }
    }

    cout << price;
}