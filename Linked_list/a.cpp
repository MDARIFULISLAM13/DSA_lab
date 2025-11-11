/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 22:30:33
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class linkedlist
{

private:
    node *head = NULL;
    node *tail = NULL;

public:
    void push_first(ll val)
    {
        node *nn = new node(val);

        if (head == NULL)
        {
            head = tail = nn;
        }
        else
        {
            nn->next = head;
            head = nn;
        }
    }
    void push_last(ll val)
    {
        node *nn = new node(val);

        if (head == NULL)
        {
            head = tail = nn;
        }
        else
        {
            tail->next = nn;
            tail = nn;
        }
    }
    void push_val(ll val, ll in)
    {
        node *nn = new node(val);
        node *temp = head;
        while (temp != NULL)
        {

            if (temp->data == in)
            {
                nn->next = temp->next;
                temp->next = nn;
                break;
            }
            temp = temp->next;
        }
    }

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

linkedlist li;
void pro()
{
    cout << "1.first push\n2 last push\n3 value push \n 4 print\n";

    ll x;
    cin >> x;
    if (x == 1)
    {
        ll val;
        cin >> val;
        li.push_first(val);
    }
    else if (x == 2)
    {
        ll val;
        cin >> val;
        li.push_last(val);
    }
    else if (x == 3)
    {
        ll val, ind;
        cin >> val >> ind;
        li.push_val(val, ind);
    }
    else if (x == 4)
    {
        li.print();
    }
    pro();
}
int main()
{
    pro();
}