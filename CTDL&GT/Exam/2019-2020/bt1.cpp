#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int k)
{
    Node* p = new (Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void TreeInsert(Node* &T, int k)
{
    Node* p = createNode(k);
    if (T == NULL)  
        T = p;
    else
    {
        if (k > T->data)
            TreeInsert(T->right, k);
        else 
            TreeInsert(T->left, k);
    }
}

void NLR(Node* T)
{
    if (T != NULL)
    {
        cout << T->data << " ";
        NLR(T->left);
        NLR(T->right);
    }
}

void LRN(Node* T)
{
    if (T != NULL)
    {
        LRN(T->left);
        LRN(T->right);
        cout << T->data << " ";
    }
}

int main()
{
    Node* T = NULL;
    TreeInsert(T, 7);
    TreeInsert(T, 2);
    TreeInsert(T, 34);
    TreeInsert(T, 1);
    TreeInsert(T, 6);
    TreeInsert(T, 15);
    TreeInsert(T, 41);
    TreeInsert(T, 9);
    TreeInsert(T, 16);
    TreeInsert(T, 12);
    TreeInsert(T, 40);
    TreeInsert(T, 45);
    NLR(T);
    cout << endl;
    LRN(T);
    return 0;
}