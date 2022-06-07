#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

typedef struct Node* Tree;

Tree createNode(int k)
{
    Tree p = new (Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void Insert(Tree &T, int k)
{
    if (T == NULL)
    {
        Tree p = createNode(k);
        T = p;
    }   

    else
    {
        if (T->data > k)
            Insert(T->left, k);
        else
            Insert(T->right, k);
    }
}

int Sum(Tree T)
{
    if (T == NULL)
        return 0;
    return T->data + Sum(T->left) + Sum(T->right);
}

int Count(Tree T)
{
    if (T == NULL)
        return 0;
    if (T->left != NULL && T->right != NULL)
        return 1 + Count(T->left) + Count(T->right);
    return Count(T->left) + Count(T->right);
}

void Print(Tree T, int k)
{
    if (T != NULL)
    {
        if (T->data == k)
            cout << T->data;

        else if (T->data > k)   
        {
            cout << T->data << " ";
            Print(T->left, k);
        }

        else
        {
            cout << T->data << " ";
            Print(T->right, k);
        }
    }
}

int main()
{
    Tree T = NULL;
    Insert(T, 10);
    Insert(T, 2);
    Insert(T, 8);
    Insert(T, 26);
    Insert(T, 24);
    Insert(T, 35);
    Insert(T, 7);
    Insert(T, 1);
    cout << Sum(T) << endl;
    cout << Count(T) << endl;
    Print(T, 7);
    return 0;
}