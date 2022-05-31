#include <iostream>
using namespace std;

typedef struct Node *Tree;

struct Node
{
    int data;
    Tree left, right;
};

Tree CreatNode(int k)
{
    Tree p = new (Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void TreeInsert(Tree &T, int k)
{
    if (T == NULL)
    {
        Tree p = CreatNode(k);
        T = p;
    }
    else if (T->data < k)
        TreeInsert(T->right, k);
    else
        TreeInsert(T->left, k);
}

void Print(Tree T)
{
    if (T != NULL)
    {
        Print(T->right);
        if (T->data % 2 == 0)
            cout << T->data << " ";
        Print(T->left);
    }
}

int main()
{
    Tree T = NULL;
    TreeInsert(T, 25);
    TreeInsert(T, 15);
    TreeInsert(T, 50);
    TreeInsert(T, 10);
    TreeInsert(T, 22);
    TreeInsert(T, 35);
    TreeInsert(T, 70);
    Print(T);
    return 0;
}