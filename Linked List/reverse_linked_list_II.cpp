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
void reverse_linked_list_II(Node *head, int left, int right)
{
    int mid = (left + right) / 2;
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    reverse_linked_list_II(head, 2, 4);

    return 0;
}
