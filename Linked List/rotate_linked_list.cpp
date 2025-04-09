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

void Rotate_list(Node *head, int k)
{

    Node *tmp = head;
    int size = 0, r;
    while (tmp)
    {
        tmp = tmp->next;
        size++;
    }
    size ? r = k % size : r = 0;
    if (!r)
    {
        cout << "same." << endl;
    }
    else
    {
        tmp = head;
        Node *dummy = new Node(101);
        dummy->next = head;
        Node *shift = dummy;
        for (int i = 1; i <= size - r; i++)
        {
            tmp = tmp->next;
            shift = shift->next;
        }
        shift->next = NULL;
        head = tmp;
        while (tmp->next)
        {
            tmp = tmp->next;
        }

        tmp->next = dummy->next;
        while (head)
        {
            cout << head->val << " ";
            head = head->next;
        }
    }
}

int main()
{
    Node *h = new Node(1);
    Node *a = new Node(2);

    h->next = a;

    Rotate_list(h, 7);
    return 0;
}
