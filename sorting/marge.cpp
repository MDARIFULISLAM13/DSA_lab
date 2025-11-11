

/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 11:11:11
 * Problem Name : marge
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

void marge(vec &v, ll left, ll mid, ll right)
{
    ll l1 = mid - left + 1;
    ll r1 = right - mid;

    vec l(l1), r(r1);

    for (int i = 0; i < l1; i++)
    {
        l[i] = v[i + left];
    }
    for (int i = 0; i < r1; i++)
    {
        r[i] = v[i + mid + 1];
    }

    int i = 0, j = 0, k = left;

    // Merge the two halves
    while (i < l1 && j < r1)
    {
        if (l[i] <= r[j])
            v[k++] = l[i++];
        else
            v[k++] = r[j++];
    }

    // Copy remaining elements
    while (i < l1)
        v[k++] = l[i++];
    while (j < r1)
        v[k++] = r[j++];
}
void margesort(ll left, ll right, vec &v)
{
    if (left >= right)
    {
        return;
    }
    ll mid = (left + right) / 2;

    margesort(left, mid, v);
    margesort(mid + 1, right, v);
    marge(v, left, mid, right);
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

    margesort(0, n - 1, v);

    for (auto i : v)
        cout << i << " ";

    return 0;
}