#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> points(n);
    vector<int> sol(n);
    vector<int> p;
    unordered_map<int, int> peaks;
    pair<int, int> highest = {-1, -1};

    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
        if (points[i] > highest.second) {
            highest = {i, points[i]};
        }
    }

    // find peaks
    for (int i = 1; i < n - 1; i++)
    {
        if (points[i - 1] < points[i] && points[i + 1] < points[i]) {
            sol[i] = -1;
            p.push_back(i);
        } else {
            sol[i] = 0;
        }
    }

    // calculate isolation
    for (int i = 0; i < p.size(); i++)
    {
        // for each peak, compare to either end or highest peak or next highest point whichever comes first
        int upper = n - 1, lower = 0;
        int dist = -1;
        if (p[i] < highest.first) upper = highest.first;
        else lower = highest.first;

        for (int j = p[i]; j <= upper; j++)
        {
            if (points[j] > points[p[i]]) {
                dist = j - p[i];
                break;
            }
        }

        if (p[i] - lower > dist && dist != -1) lower = p[i] - dist;

        for (int j = p[i]; j >= lower; j--)
        {
            if (points[j] > points[p[i]]) {
                dist = p[i] - j;
                break;
            }
        }
        peaks[p[i]] = dist;
    }
    
    for (auto peak: peaks) {
        sol[peak.first] = peak.second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << sol[i] << " ";
    }
    
}