/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 10:45:07
 * Problem Name : selection
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

vec selection(vec v)
{
    for (int i = 0; i < v.size(); i++)
    {
        ll mn = i; 
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[mn] > v[j])
            {
                mn = j;
            }
        }
        swap(v[i], v[mn]);
    }

    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vec v(n);
    for (auto &i : v)
        cin >> i;

    v = selection(v);

    for (auto i : v)
        cout << i << " ";

    return 0;
}