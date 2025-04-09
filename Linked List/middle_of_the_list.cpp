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
int Size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
Node *pointer(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    return tmp;
}
int main()
{
    Node *head = new Node(50);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(60);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    int sze = Size(head);
    if (sze % 2 == 1)
        sze = (sze + 1) / 2;
    else
        sze = (sze / 2) + 1;
    Node *middle = pointer(head, sze);

    while (middle != NULL)
    {
        cout << middle->val;
        middle = middle->next;
    }

    return 0;
}
