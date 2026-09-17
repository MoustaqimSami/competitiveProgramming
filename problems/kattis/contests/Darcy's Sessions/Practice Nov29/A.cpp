#include <bits/stdc++.h>
using namespace std;

int shortestDistance(vector<vector<int>> &adj, int n)
{
    int V = adj.size();

    vector<bool> visited(V, false);
    vector<int> res;
    vector<int> dist(V, -1);

    queue<int> q;

    int src = 0;

    visited[src] = true;
    dist[src] = 0;
    q.push(src);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        for (int x : adj[curr])
        {
            if (!visited[x])
            {
                visited[x] = true;
                dist[x] = dist[curr] + 1;
                q.push(x);
            }
        }
    }

    return dist[n];
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int d = shortestDistance(graph, (N-1));
    cout << (d - 1);
}