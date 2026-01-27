#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n && n != 0)
    {
        vector<pair<string, vector<double>>> boxes;

        for (int i = 0; i < n; i++)
        {
            string name;
            double x1, x2, y1, y2;

            cin >> x1 >> y1 >> x2 >> y2 >> name;

            vector<double> cord = {x1, x2, y1, y2};
            boxes.push_back({name, cord});
        }

        int m;
        cin >> m;

        for (int i = 0; i < m; i++)
        {
            double x, y;
            string call;

            cin >> x >> y >> call;
            bool found = false;

            for (auto box : boxes)
            {
                vector<double> cords = box.second;
                if (cords[0] <= x && x <= cords[1] && cords[2] <= y && y <= cords[3])
                {
                    found = true;
                    if (call == box.first)
                        cout << call << " correct" << endl;
                    else
                        cout << call << " " << box.first << endl;

                    break;
                }
            }

            if (!found)
                cout << call << " " << "floor" << endl;
        }

        cout << endl;
    }
}