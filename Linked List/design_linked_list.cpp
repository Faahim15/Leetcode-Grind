#include <bits/stdc++.h>
using namespace std;

class MyLinkedList
{
private:
    struct Node
    {
        int val;
        Node *next;
        Node(int v)
        {
            val = v;
            next = NULL;
        }
    };

    Node *head;
    Node *tail;
    int size;

public:
    MyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        Node *tmp = head;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        return tmp->val;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void addAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > size)
            return;
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        Node *tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = tmp->next;
        tmp->next = newNode;
        if (newNode->next == NULL)
            tail = newNode;
        size++;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;
        Node *tmp = head;
        if (index == 0)
        {
            head = head->next;
            delete tmp;
            if (head == NULL)
                tail = NULL;
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
            {
                tmp = tmp->next;
            }
            Node *dlt = tmp->next;
            tmp->next = tmp->next->next;
            if (tmp->next == NULL)
                tail = tmp;
            delete dlt;
        }
        size--;
    }
};
