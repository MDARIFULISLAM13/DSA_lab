/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 21:25:39
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{

    ll n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ind_v;
    cin >> ind_v;
    ll val;
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ind_v)
        {
            a[i] = val;
            break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}