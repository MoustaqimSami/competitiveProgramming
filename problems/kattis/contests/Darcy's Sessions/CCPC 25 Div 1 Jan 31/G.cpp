#include <bits/stdc++.h>
using namespace std;

void dfs(map<int, vector<int>> &adj,
         vector<bool> &visited, int s)
{
    if (visited[s])
        return;
    visited[s] = true;

    for (int i : adj[s])
        if (visited[i] == false)
            dfs(adj, visited, i);
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> pools(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pools[i];
    }

    map<int, vector<int>> pipes;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        pipes[a].push_back(b);
        pipes[b].push_back(a);
    }

    set<int> contaminated;

    for (int i = 0; i < k; i++)
    {
        int cont;
        cin >> cont;
        contaminated.insert(cont);
    }

    vector<bool> visited(pools.size() + 1, false);

    for (auto c : contaminated)
    {
        dfs(pipes, visited, c);
    }

    int contCap = 0;
    for (int i = 1; i < visited.size(); i++)
    {
        if (visited[i]) contCap += pools[i-1];
    }

    int cap = 0;
    for (int i = 0; i < pools.size(); i++)
    {
        cap += pools[i];
    }
    
    int ans = cap - contCap;
    cout << ans << endl;
}