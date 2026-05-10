/**
 *
 * Author : Md.Ariful Islam
 * Topic : Topological Sort
 *
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int mx = 1e5 + 123;

vector<int> g[mx];
int indegree[mx];

vector<int> topological_sort(int n)
{

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> topo;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        topo.push_back(u);

        for (auto v : g[u])
        {
            indegree[v]--;

            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    return topo;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        indegree[v]++;
    }

    vector<int> topo = topological_sort(n);

    if (topo.size() != n)
    {
        cout << "Cycle Exists" << endl;
    }
    else
    {
        for (auto x : topo)
        {
            cout << x << " ";
        }
    }

    return 0;
}