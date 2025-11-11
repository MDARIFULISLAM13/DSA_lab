/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 10:38:29
 * Problem Name : bubble
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

vec bubble(vec v)
{

    for (int i = 0; i < v.size(); i++)
    {
        bool ok = true;
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                ok = false;
            }
        
        }
        if(ok)
            break;
    }

    return v;
}

int main()
{

    ll n;
    cin >> n;
    vec v(n);
    for (auto &i : v)
        cin >> i;

    v = bubble(v);

    for(auto i : v)
        cout << i << " ";

    return 0;
}

//time complexity o(n)^2