/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 10:50:33
 * Problem Name : insertion
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

vec insertion(vec v)
{

    for (int i = 1; i < v.size(); i++)
    {
        ll j = i;
        while (j > 0 && v[j] < v[j - 1])
        {
            swap(v[j], v[j - 1]);
            --j;
        }
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vec v(t);
    for (auto &i : v)
        cin >> i;

    v = insertion(v);
    for (auto i : v)
        cout << i << " ";

    return 0;
}