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

int main()
{
    // l1
    Node *h = new Node(2);
    Node *b = new Node(4);
    Node *c = new Node(3);
    h->next = b;
    b->next = c;
    // l2
    Node *h1 = new Node(5);
    Node *a1 = new Node(6);
    Node *b1 = new Node(4);

    h1->next = a1;
    a1->next = b1;

    Node *dummy = new Node(0);
    Node *sum = dummy;
    Node *p = h1, *q = h;
    int carrier = 0;
    while (p != NULL || q != NULL)
    {
        int x = (p) ? p->val : 0;
        int y = (q) ? q->val : 0;
        int add = x + y + carrier;
        carrier = add / 10;
        sum->next = new Node(add % 10);
        sum = sum->next;
        if (p)
            p = p->next;
        if (q)
            q = q->next;
    }
    if (carrier)
    {
        sum->next = new Node(carrier);
    }
    dummy = dummy->next;

    return 0;
}
