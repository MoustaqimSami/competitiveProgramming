#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, year, month, day;
    cin >> n >> year >> month >> day;

    vector<int> mDays = {31, 28, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31};
    vector<int> mDaysLeap = {31, 29, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31};

    vector<int> monthDays = mDays;
    bool leap = (year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0));
    if (leap)
        monthDays = mDaysLeap;

    int days = monthDays[month - 1] - day;
    int m = month;

    if (month == 2 && day == 29 && !leap)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    for (int i = year; i <= 100000; i++)
    {
        vector<int> monthDays = mDays;
        bool leap = (i % 4 == 0 && !(i % 100 == 0 && i % 400 != 0));
        if (leap)
            monthDays = mDaysLeap;

        while (m < 12)
        {
            if (m == month - 1)
            {
                int d = day;
                if (month == 2 && day == 29 && !leap)
                {
                    continue;
                }
                if ((days + d) % n == 0)
                {
                    cout << days + d << endl;
                    return 0;
                }
            }
            days += monthDays[m];
            m++;
        }

        m = 0;
    }

    cout << "IMPOSSIBLE" << endl;
    ;
}