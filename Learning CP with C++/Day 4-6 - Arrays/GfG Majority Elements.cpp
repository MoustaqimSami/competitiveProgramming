#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &arr)
{
    int minFreq = arr.size() / 3;
    vector<int> answer;
    map<int, int> dict;

    for (int i = 0; i < arr.size(); i++)
    {
        dict[arr[i]]++;
    }

    for (const auto &p : dict)
    {
        if (p.second > minFreq)
            answer.push_back(p.first);
    }

    return answer;
}

int main()
{
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> answer = findMajority(arr);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}