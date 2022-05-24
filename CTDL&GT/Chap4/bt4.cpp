#include <iostream>
using namespace std;

typedef struct Node *Tree;

struct Node
{
    int data;
    Tree left, right;
};

Tree TreeIntialize(Tree T)
{
    T = NULL;
    return T;
}

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
        Print(T->left);
        cout << T->data << " ";
        Print(T->right);
    }
}

int main()
{
    Tree T = TreeIntialize(T);
    TreeInsert(T, 12);
    TreeInsert(T, 5);
    TreeInsert(T, 18);
    TreeInsert(T, 4);
    TreeInsert(T, 9);
    Print(T);
    return 0;
}