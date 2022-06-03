#include <iostream>
using namespace std;

typedef struct Node* Tree;

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

int Min(Tree T)
{
    if (T == NULL)
        return 0;
    while (T->left != NULL)
        T = T->left;
    return T->data;
}

int Max(Tree T)
{
    if (T == NULL)
        return 0;
    while (T->right != NULL)
        T = T->right;
    return T->data;
}

int BinaryTree(Tree T)
{
    if (T == NULL)
        return 1;
    if (T->left != NULL && Max(T->left) > T->data)
        return 0;
    if (T->right != NULL && Min(T->right) < T->data)
        return 0;
    if (!BinaryTree(T->left) || !BinaryTree(T->right))
        return 0;
    return 1;
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
    if (BinaryTree(T))
        cout << "Tree is a binary tree ";
    else
        cout << "Tree is not a binary tree ";
    return 0;
}