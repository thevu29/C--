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

Tree CreatTree(Tree &T, int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        TreeInsert(T, a[i]);
    }
    return T;
}

void Sort(Tree T, int a[], int &i)
{
    if (T != NULL)
    {
        Sort(T->left, a, i);
        a[i++] = T->data;
        Sort(T->right, a, i);
    }
}

int main()
{
    Tree T = NULL;
    int a[] = {30, 20, 15, 25, 50, 40, 60, 33, 45, 42, 48};
    T = CreatTree(T, a, 11);
    int i = 0;
    Sort(T, a, i);
    for (i = 0; i < 11; i++)
        cout << a[i] << " ";
    return 0;
}