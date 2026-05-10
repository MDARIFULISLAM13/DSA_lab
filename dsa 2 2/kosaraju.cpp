/**
 *
 * Author : Md.Ariful Islam
 * Topic : Kosaraju Algorithm
 *
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int mx = 1e5 + 123;

vector<int> g[mx], rg[mx];
vector<bool> vis(mx);

stack<int> st;

void dfs1(int u)
{

    vis[u] = true;

    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs1(v);
        }
    }

    st.push(u);
}

void dfs2(int u)
{

    vis[u] = true;

    cout << u << " ";

    for (auto v : rg[u])
    {
        if (!vis[v])
        {
            dfs2(v);
        }
    }
}

void kosaraju(int n)
{

    // first dfs
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs1(i);
        }
    }

    // reset visited
    fill(vis.begin(), vis.end(), false);

    // second dfs
    while (!st.empty())
    {

        int u = st.top();
        st.pop();

        if (!vis[u])
        {

            dfs2(u);
            cout << endl;
        }
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

        int u, v;
        cin >> u >> v;

        g[u].push_back(v);

        // reverse graph
        rg[v].push_back(u);
    }

    kosaraju(n);

    return 0;
}