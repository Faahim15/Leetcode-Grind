#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void partition(Node *&head, int x)
{
    Node *lessHead = new Node(0), *greaterHead = new Node(0);
    Node *less = lessHead, *greater = greaterHead;
    Node *cur = head;

    while (cur)
    {
        if (cur->val < x)
        {
            less->next = cur;
            less = less->next;
        }
        else
        {
            greater->next = cur;
            greater = greater->next;
        }
        cur = cur->next;
    }

    greater->next = NULL;
    less->next = greaterHead->next;
    head = lessHead->next;

    delete lessHead;
    delete greaterHead;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(3);
    Node *d = new Node(2);
    Node *e = new Node(5);
    Node *f = new Node(2);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    Node *head = a;

    partition(a, 3);
    printList(a); // Verify output

    return 0;
}