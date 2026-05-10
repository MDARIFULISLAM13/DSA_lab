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
    cin>>val;
    for (int i = 0; i < n;i++){
        if(a[i]==val){
            cout << "Value Found\n";
            return 0;
        }
    }
    cout << "Value not Found\n";

    return 0;
}