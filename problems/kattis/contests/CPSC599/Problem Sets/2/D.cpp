#include <bits/stdc++.h>
using namespace std;

vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

auto toDay(int m, int d)
{
    int sum = 0;
    for (int i = 0; i < m - 1; i++)
    {
        sum += days[i];
    }
    return sum + d;
}

auto fromDay(int d)
{
    int m = 1;
    while (d > days[m - 1])
    {
        d -= days[m - 1];
        m++;
    }

    return pair<int, int>{m, d};
}

auto forwardDist(int start, int x)
{
    int dist = x - start;
    if (dist < 0)
        dist += 365;
    return dist;
}

int main()
{
    int n;
    cin >> n;

    vector<int> birthdays;
    birthdays.reserve(n);

    const int TODAY = toDay(10, 27);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        char c;
        int day, month;
        cin >> month >> c >> day;

        birthdays.push_back(toDay(month, day));
    }

    sort(birthdays.begin(), birthdays.end());

    int maxDiff = -1;
    int result = -1;

    int tieBreaker = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int cur = birthdays[i];
        int next = (i + 1 < n ? birthdays[i + 1] : birthdays[0] + 365);

        int gap = next - cur;

        int fake = next - 1;
        fake = ((fake - 1) % 365) + 1;

        int dist = forwardDist(TODAY, fake);
        if (dist == 0)
            dist = 365;

        if (gap > maxDiff || (gap == maxDiff && dist < tieBreaker))
        {
            maxDiff = gap;
            result = fake;
            tieBreaker = dist;
        }
    }

    cout << setw(2) << setfill('0') << fromDay(result).first << "-" << setw(2) << setfill('0') << fromDay(result).second << endl;
}