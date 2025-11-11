/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 11:20:33
 * Problem Name : quick_sort
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vec = vector<ll>;


int patt(vec &v, ll low, ll high)
{
    ll pre = v[high];

    int i = low -1 ;

    for (int j = low; j < high; j++)
    {
        if (pre >= v[j])
        {
            i++;
            swap(v[i], v[j]);
        }
    }

    swap(v[i+1], v[high]);
    return i + 1;
}

void qs(vec &v, ll low, ll high)
{
    if (low < high)
    {
        int pi = patt(v,low,high);

        qs(v, low, pi - 1);
        qs(v, pi, high);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vec v(n);
    for (auto &x : v)
        cin >> x;

    qs(v, 0, n - 1);

    for (auto x : v)
        cout << x << " ";
    cout << "\n";

    return 0;
}
