#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int num : arr){
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num < largest && num > secondLargest) {
            secondLargest = num;
        }
    }

    if (secondLargest != INT_MIN) return secondLargest;
    else return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i){
        cin >> numbers[i];
    }

    cout << getSecondLargest(numbers);
}