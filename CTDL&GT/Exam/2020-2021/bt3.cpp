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

void NRL(Node* T)
{
    if (T != NULL)
    {
        cout << T->data << " ";
        NRL(T->right);
        NRL(T->left);
    }
}

void Insert(Node* &T, int k)
{
    Node* p = createNode(k);
    if (T == NULL)
        T = p;
    else
    {
        if (k < T->data)
            Insert(T->left, k);
        else
            Insert(T->right, k);
    }
}

int Count(Node* T)
{
    if (T != NULL)
    {
        if (T->left == NULL && T->right == NULL)
            return 1;
        return Count(T->left) + Count(T->right);
    }
    return 0;
}

void LNR(Node* T)
{
    if (T != NULL)
    {
        LNR(T->left);
        cout << T->data << " ";
        LNR(T->right);
    }
}

int main()
{
    Node* T = NULL;
    TreeInsert(T, 18);
    TreeInsert(T, 10);
    TreeInsert(T, 24);
    TreeInsert(T, 5);
    TreeInsert(T, 13);
    TreeInsert(T, 7);
    TreeInsert(T, 20);
    TreeInsert(T, 29);
    TreeInsert(T, 19);
    TreeInsert(T, 22);
    TreeInsert(T, 27);
    NRL(T);
    Insert(T, 30);
    cout << endl;
    LNR(T);
    cout << "\n" << Count(T);
    return 0;
}