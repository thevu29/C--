#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* creatNode(int k)
{
    Node* p = new(Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void TreeInsert(Node* &T, int k)
{
    if (T == NULL)
    {
        Node* p = creatNode(k);
        T = p;
    }
    else if (k > T->data)    
        TreeInsert(T->right, k);
    else if (k < T->data)
        TreeInsert(T->left, k);
}

void Print(Node* T, int i)
{
    if (T != NULL)
    {
        if (i == 0)
            cout << T->data << " ";
        Print(T->left, i - 1);
        Print(T->right, i - 1);
    }
}

int main()
{   
    Node* T = NULL;   
    TreeInsert(T, 30);
    TreeInsert(T, 20);
    TreeInsert(T, 15);
    TreeInsert(T, 25);
    TreeInsert(T, 50);  
    TreeInsert(T, 40);
    TreeInsert(T, 60);
    TreeInsert(T, 33);
    TreeInsert(T, 45);
    TreeInsert(T, 42);
    TreeInsert(T, 48);
    Print(T, 1);
    return 0;
}