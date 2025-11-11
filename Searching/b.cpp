/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 21:33:53
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

    ll val;
    cin >> val;
    ll low = 0, high = n - 1;

    while(low<=high){
        ll mid = (low + high) / 2;

        if(a[mid]==val){
            cout << "value Found\n";
            return 0;
        }
        else if(a[mid]>val){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }

    cout << "Value Not Found\n";

    return 0;
}