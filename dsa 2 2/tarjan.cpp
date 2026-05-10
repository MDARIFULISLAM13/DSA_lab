/**
 *
 * Author : Md.Ariful Islam
 * Topic : Tarjan SCC
 *
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int mx = 1e5 + 123;

vector<int> g[mx];

int in[mx], low[mx], timer;
bool inStack[mx];

stack<int> st;

void tarjan(int u)
{

    in[u] = low[u] = ++timer;

    st.push(u);
    inStack[u] = true;

    for (auto v : g[u])
    {

        if (in[v] == 0)
        {

            tarjan(v);

            low[u] = min(low[u], low[v]);
        }

        else if (inStack[v])
        {

            low[u] = min(low[u], in[v]);
        }
    }

    // SCC root
    if (in[u] == low[u])
    {

        while (true)
        {

            int x = st.top();
            st.pop();

            inStack[x] = false;

            cout << x << " ";

            if (x == u)
                break;
        }

        cout << endl;
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
    }

    for (int i = 1; i <= n; i++)
    {

        if (in[i] == 0)
        {
            tarjan(i);
        }
    }

    return 0;
}