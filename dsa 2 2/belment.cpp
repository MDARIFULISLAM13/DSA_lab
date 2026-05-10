/**
 *
 * Author : Md.Ariful Islam
 * Topic : Bellman Ford
 *
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int mx = 1e5 + 123;
const int inf = 1e9;

vector<pair<pair<int, int>, int>> edges;
vector<int> dist(mx, inf);

void bellman_ford(int src, int n)
{

    dist[src] = 0;

    // relax edges n-1 times
    for (int i = 1; i <= n - 1; i++)
    {

        for (auto e : edges)
        {

            int u = e.first.first;
            int v = e.first.second;
            int w = e.second;

            if (dist[u] != inf && dist[u] + w < dist[v])
            {

                dist[v] = dist[u] + w;
            }
        }
    }

    // negative cycle check
    for (auto e : edges)
    {

        int u = e.first.first;
        int v = e.first.second;
        int w = e.second;

        if (dist[u] != inf && dist[u] + w < dist[v])
        {

            cout << "Negative Cycle Exists" << endl;
            return;
        }
    }

    for (int i = 1; i <= n; i++)
    {

        cout << "Distance of " << i << " = " << dist[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {

        int u, v, w;
        cin >> u >> v >> w;

        edges.push_back({{u, v}, w});
    }

    int src;
    cin >> src;

    bellman_ford(src, n);

    return 0;
}