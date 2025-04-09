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

void remove_duplicate(Node *head)
{
    Node *dummy = new Node(0);
    Node *cur = head;
    dummy->next = head;
    Node *prev = dummy;

    while (cur != NULL)
    {
        if (cur->next != NULL && cur->val == cur->next->val)
        {
            while (cur->next != NULL && cur->val == cur->next->val)
            {
                cur = cur->next;
            }
            prev->next = cur->next;
        }
        else
            prev = prev->next;

        cur = cur->next;
    }
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head;
    Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(1);
    Node *d = new Node(2);
    Node *e = new Node(3);
    Node *f = new Node(3);

    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    // print(head);
    remove_duplicate(head);
    print(head);

    return 0;
}
