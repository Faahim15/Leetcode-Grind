#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
void Deep_copy(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        Node *newNode = new Node(curr->val);
        newNode->next = curr->next;
        curr->next = newNode;
        curr = newNode->next;
    }

    Node *cur = head;
    while (cur != NULL)
    {
        if (cur->random)
        {
            cur->next->random = cur->random->next;
        }
        cur = cur->next->next;
    }
    Node *newHead = head->next;
    Node *copy = newHead;
    Node *original = head;

    while (original)
    {
        original->next = original->next ? original->next->next : NULL;
        copy->next = copy->next ? copy->next->next : NULL;

        original = original->next;
        copy = copy->next;
    }

    Node *tmp = head->next;
    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *h = new Node(7);
    Node *a = new Node(13);
    Node *c = new Node(11);
    Node *d = new Node(10);
    Node *b = new Node(1);
    h->next = a;
    h->random = NULL;
    a->next = c;
    a->random = h;
    c->next = d;
    c->random = b;
    d->next = b;
    d->random = c;
    b->next = NULL;
    b->random = h;
    Node *head = h;
    Deep_copy(head);

    return 0;
}
