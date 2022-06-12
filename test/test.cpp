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
        else if (T->data < k)
            Insert(T->right, k);
    }
}

void LNR(Tree T)
{
    if (T != NULL)
    {
        LNR(T->left);
        cout << T->data << " ";
        LNR(T->right);
    }
}

int Min(Tree &T)
{
    if (T->left == NULL)
    {
        int min = T->data;
        T = NULL;
        return min;
    }
    return Min(T->left);
}

void Delete(Tree &T, int k)
{
    if (T != NULL)
    {
        if (T->data > k)
            Delete(T->left, k);
        else if (T->data < k)
            Delete(T->right, k);    
        else if (T->right == NULL)
            Delete(T->left, k);
        else if (T->left == NULL)
            Delete(T->right, k);
        else    
            T->data = Min(T->right);     
    }   
}

int main()  
{
    Tree T = NULL;
    Insert(T, 12);
    Insert(T, 5);
    Insert(T, 18);
    Insert(T, 2);
    Insert(T, 9);
    Insert(T, 15);
    Insert(T, 20);
    Insert(T, 13);
    Insert(T, 19);
    LNR(T);
    Delete(T, 18);
    cout << endl;
    LNR(T);
    return 0;
}