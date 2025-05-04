#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void pre_order(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void in_order_traversal(Node *root)
{
    if (root == NULL)
        return;
    in_order_traversal(root->left);
    cout << root->val << " ";
    in_order_traversal(root->right);
}

void post_order_traversal(Node *root)
{
    if (root == NULL)
        return;
    post_order_traversal(root->left);
    post_order_traversal(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(70);
    Node *f = new Node(80);

    root->left = a;
    root->right = b;

    a->left = c;
    b->right = d;
    d->left = e;
    d->right = f;

    // pre_order(root);
    // post_order_traversal(root);
    in_order_traversal(root);

    return 0;
}
