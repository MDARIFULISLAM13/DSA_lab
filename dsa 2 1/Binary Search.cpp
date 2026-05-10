/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 09:45:31
 * Problem Name : a
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

int main()
{

    ll n;
    cin >> n;
    vec v(n);
    for (auto &i : v)
        cin >> i;

    ll key;
    cin >> key;

    ll l = 0, h = n - 1;
    while (l <= h)
    {
        ll mid = (l + h) / 2;

        if (v[mid] == key)
        {
            cout << "Value found\n";
            return 0;
        }
        else if (v[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "Not";

    return 0;
}