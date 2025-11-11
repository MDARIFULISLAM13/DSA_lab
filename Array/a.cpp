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
    ll ind;
    cin >> ind;
    ll val;
    cin >> val;
    ++n;
    for (int i = n; i > ind; i--)
        a[i] = a[i - 1];

    a[ind] = val;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}