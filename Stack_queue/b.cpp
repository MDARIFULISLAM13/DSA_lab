/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 21:52:58
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void que();

const ll n = 100;
ll rare = -1, front = -1;
int q[n];

void print()
{

    int i = front;

    while (true)
    {
        cout << q[i] << " ";
        if (i == rare)
            break;

        i = (i + 1) % n;
    }
    que();
}
void push(ll x)
{

    if ((rare + 1) % n == front)
    {
        cout << " Queue Full\n";
        que();
        return;
    }

    if (front == -1)
    {
        rare = front = 0;
    }
    else
    {
        rare = (rare + 1) % n;
    }
    q[rare] = x;

    cout << "Enque ";

    print();
}

void pop()
{
    if (front == -1)
    {
        cout << "Stack Empty\n";
        que();
        return;
    }

    else if (front == rare)
    {
        front = rare = -1;
        que();
    }
    else
    {
        front = (front + 1) % n;
    }

    cout << "dequeue :";
    print();
}
void que()
{
    ll x;
    cout << "1 Enqueue\n2 Dequeue \n3 print\n";

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

    que();
    return 0;
}