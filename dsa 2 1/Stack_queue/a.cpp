/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 21:39:10
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int n = 100;
int a[n];

ll cnt = -1;
void stk();

void print()
{

    for (int i = 0; i <= cnt; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    stk();
}

void push(ll x)
{
    if (cnt == (n - 1))
    {
        cout << "stk Overflow\n";
        stk();
    }

    ++cnt;
    a[cnt] = x;

    cout << "Push stack : ";

    print();
}
void pop()
{
    if (cnt == -1)
    {
        cout << "Stack Underflow\n";
        stk();
    }

    --cnt;
    cout << "Pop Stack\n";
    print();
}
void stk()
{
    ll x;
    cout << "1 push\n2 pop \n3 print\n";

    cin >> x;
    if (x == 1)
    {
        ll val;
        cin >> val;

        push(val);
    }
    else if (x == 2)
    {
        pop();
    }
    else
    {
        print();
    }
}

int main()
{

    stk();

    return 0;
}