#include <iostream>
using namespace std;

typedef struct Node* Tree;

struct Node
{
    int data;
    Tree left, right;
};

void CreatTree(Tree &T)
{
    T = NULL;
}

Tree CreatNode(int k)
{
    Tree p = new (Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

Tree Search(Tree x, int k)
{
    if (x == NULL || x->data == k)
        return x;
    if (x->data < k)
        return Search(x->right, k);
    else
        return Search(x->left, k);
}

void Insert(Tree &T, int k)
{
    if (T == NULL)
    {
        Tree p = CreatNode(k);
        T = p;
    }
    
    else if (T->data < k)
        Insert(T->right, k);
    else
        Insert(T->left, k);
}

int Min(Tree &T)
{
    int min;
    if (T->left == NULL)
    {
        min = T->data;
        T = T->right;
        return min;
    }
    return Min(T->left);
}

void Delete(Tree &T, int k)
{
    if (T != NULL)
    {
        if (T->data < k)
            Delete(T->right, k);
        else if (T->data > k)
            Delete(T->left, k);
        else if (T->left == NULL)
            T = T->right;
        else if (T->right == NULL)
            T = T->left;
        else
            T->data = Min(T->right);
    }
}

void InOrder_LNR(Tree x)
{
    if (x != NULL)
    {
        InOrder_LNR(x->left);
        cout << x->data << " ";
        InOrder_LNR(x->right);
    }
}

void PreOrder_NLR(Tree x)
{
    if (x != NULL)
    {
        cout << x->data << " ";
        PreOrder_NLR(x->left);
        PreOrder_NLR(x->right);
    }
}

void PostOrder_LRN(Tree x)
{
    if (x != NULL)
    {
        PostOrder_LRN(x->left);
        PostOrder_LRN(x->right);
        cout << x->data << " ";
    }
}

int main()
{
    Tree T;
    CreatTree(T);
    Insert(T, 12);
    Insert(T, 5);
    Insert(T, 18);
    Insert(T, 2);
    Insert(T, 9);
    Insert(T, 15);
    Insert(T, 20);
    Insert(T, 13);
    Insert(T, 19);
    InOrder_LNR(T);
    // PreOrder_NLR(T);
    // PostOrder_LRN(T);
    PreOrder_NLR(T);
    return 0;
}