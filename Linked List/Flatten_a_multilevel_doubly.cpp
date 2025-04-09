#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
        this->child = NULL;
    }
};
void flatten(Node *head)
{
    Node *cur = head;
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);

    head->next = a;
    head->child = b;
    a->prev = head;
    flatten(head);
    return 0;
}
