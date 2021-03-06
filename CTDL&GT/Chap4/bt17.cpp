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

int Search(Tree T, int k)
{
    if (T != NULL)
    {
        if (k == T->data)
            return 1;
        else if (k > T->data)
            return Search(T->right, k);
        else
            return Search(T->left, k);
    }
    return 0;
}

void Print(Tree T, int k)
{
    if (T != NULL && Search(T, k))
    {
        while (T != NULL && T->data != k)
        {
            if (T->data > k)
            {
                cout << T->data << " ";
                T = T->left;
            }

            else
            {
                cout << T->data << " ";
                T = T->right;
            }
        }

        cout << T->data;
    }
}

void Print1(Tree T, int k)
{
    if (T != NULL && Search(T, k))
    {
        if (T->data == k)
            cout << T->data;

        else if (k > T->data)
        {
            cout << T->data << " ";
            Print(T->right, k);
        }

        else
        {
            cout << T->data << " ";
            Print(T->left, k);
        }
    }
}

int main()
{
    Tree T = NULL;
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
    Print(T, 42);
    cout << endl;
    Print1(T, 42);
    return 0;
}