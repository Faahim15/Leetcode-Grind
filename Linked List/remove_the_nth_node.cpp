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
int size(Node *head)
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
void print(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << "NULL" << endl;
        return;
    }

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
Node *remove_nth_node(Node *&head, int n)
{
    int sz = size(head) - n;
    Node *tmp = head;
    if (sz == 0)
    {
        head = tmp->next;
        delete tmp;
        return head;
    }
    for (int i = 0; i < sz - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *dlt = tmp->next;
    tmp->next = tmp->next->next;
    delete dlt;
    return head;
}
int main()
{
    Node *head = NULL;
    Node *a = new Node(1);
    Node *b = new Node(2);
    // Node *c = new Node(3);
    // Node *d = new Node(4);
    // Node *e = new Node(5);

    head = a;
    a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;

    remove_nth_node(head, 1);
    print(head);
    return 0;
}
