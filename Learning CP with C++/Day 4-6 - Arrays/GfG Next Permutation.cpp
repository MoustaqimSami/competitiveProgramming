#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    if (arr.size() <= 1)
        return;

    int pivot = -1;
    bool changed = false;

    for (int i = arr.size() - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            pivot = i - 1;
            break;
        }
    }
    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    else
    {
        int suffix = arr.size() - 1;
        while (arr[suffix] <= arr[pivot])
            suffix--;

        swap(arr[pivot], arr[suffix]);
        reverse(arr.begin() + pivot + 1, arr.end());
    }
}

int main()
{
    vector<int> arr = {3, 2, 1};
    nextPermutation(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}