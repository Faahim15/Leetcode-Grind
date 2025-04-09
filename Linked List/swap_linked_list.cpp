#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

ListNode *swap_linked_list(ListNode *head)
{
    if (!head || !head->next)
        return head; // If the list is empty or has only one node, return head

    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy, *current = head;

    while (current && current->next)
    {
        ListNode *nextPair = current->next->next;
        ListNode *second = current->next;

        // Swapping adjacent nodes
        second->next = current;
        current->next = nextPair;
        prev->next = second;

        // Move pointers forward for the next pair
        prev = current;
        current = nextPair;
    }

    head = dummy->next;
    delete dummy; // Free allocated memory
    return head;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    ListNode *f = new ListNode(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    cout << "Original List: ";
    printList(a);

    ListNode *newHead = swap_linked_list(a);
    cout << "Swapped List: ";
    printList(newHead);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class ListNode
// {
// public:
//     int val;
//     ListNode *next;
//     ListNode(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void swap_linked_list(ListNode *head)
// {

//     if (head == NULL)
//         cout << head;
//     else
//     {
//         ListNode *dummy = new ListNode(0);
//         ListNode *temp;
//         ListNode *slow = head;
//         ListNode *fast = head->next;
//         ListNode *track = head;
//         dummy->next = fast;
//         bool flag = false;
//         while (fast != NULL)
//         {
//             flag = true;
//             temp = fast->next;
//             fast->next = slow;
//             if (temp == NULL)
//             {
//                 slow->next = NULL;
//                 break;
//             }
//             else
//             {
//                 if (temp->next == NULL)
//                 {
//                     slow->next = temp;
//                     break;
//                 }
//                 else
//                     slow->next = temp->next;
//             }

//             slow = temp;
//             fast = slow->next;
//         }
//         if (flag)
//         {
//             ListNode *tmp = dummy->next;
//             while (tmp != NULL)
//             {
//                 cout << tmp->val << " ";
//                 tmp = tmp->next;
//             }
//         }
//         else
//         {
//             cout << track->val << " ";
//         }

//         cout << endl;
//     }
// }
// // void print(ListNode *head)
// // {
// //     ListNode *tmp = head;
// //     while (tmp != NULL)
// //     {
// //         cout << tmp->val << " ";
// //         tmp = tmp->next;
// //     }
// // }

// int main()
// {

//     ListNode *a = new ListNode(1);
//     // ListNode *b = new ListNode(2);
//     // ListNode *c = new ListNode(3);
//     // ListNode *d = new ListNode(4);
//     // ListNode *e = new ListNode(5);
//     // ListNode *f = new ListNode(6);

//     ListNode *head = a;
//     // a->next = b;
//     // b->next = c;
//     // c->next = d;
//     // d->next = e;
//     // e->next = f;

//     // print(head);
//     swap_linked_list(head);

//     return 0;
// }
