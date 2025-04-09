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

// Function to insert a new node at the end of the linked list
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node *intersection(Node *head1, Node *head2)
{
    Node *tmp = head1;

    while (tmp != NULL)
    {
        Node *tmp1 = head2;
        while (tmp1 != NULL)
        {
            if (tmp1->val == tmp->val)
                return tmp;
            tmp1 = tmp1->next;
        }
        tmp = tmp->next;
    }
    return NULL;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    // Adding numbers to the first linked list
    insertAtTail(head1, 1);
    insertAtTail(head1, 9);
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 4);

    // Adding numbers to the second linked list
    insertAtTail(head2, 3);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    Node *ans = intersection(head1, head2);
    Node *a = head1;
    Node *b = head2;
    while (a->val != b->val)
    {
        (a == NULL) ? a = head2 : a = a->next;
        (b == NULL) ? b = head1 : b = b->next;
    }
    cout << a->val << " " << b->val;
    return 0;
}
