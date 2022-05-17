#include <iostream>
using namespace std;

typedef struct AVL* Node;

struct AVL
{
    int key, height;
    Node left, right;
};

int Height(Node T)
{
    if (T == NULL)
        return 0;
    return T->height;
}

Node creatNode(int k)
{
    Node x = new(AVL);
    x->key = k;
    x->left = NULL;
    x->right = NULL;
    x->height = 1;
    return x;
}

Node rightRotate(Node T)
{
    Node T1 = T->left;

    T->left = T1->right;
    T1->right = T;

    T->height = max(Height(T->left), Height(T->right)) + 1;
    T1->height = max(Height(T1->left), Height(T1->right)) + 1;

    return T1;
}
 
Node leftRotate(Node T) 
{
    Node T1 = T->right;
 
    T->right = T1->left;
    T1->left = T;
 
    T->height = max(Height(T->left), Height(T->right)) + 1;
    T1->height = max(Height(T1->left), Height(T1->right)) + 1;
 
    return T1;
}

Node Insert(Node T, int k) 
{
    if (T == NULL)
        return creatNode(k);
    if (k > T->key)
        T->right = Insert(T->right, k);
    else if (k < T->key)
        T->left = Insert(T->left, k);
    else
        return T;
 
    T->height = max(Height(T->left), Height(T->right)) + 1;
 
    int bal = Height(T->left) - Height(T->right);

    if (bal > 1 && k < T->left->key)
        return rightRotate(T);

    if (bal < -1 && k > T->right->key)
        return leftRotate(T);
 
    if (bal > 1 && k > T->left->key) 
    {
        T->left = leftRotate(T->left);
        return rightRotate(T);
    }

    if (bal < -1 && k < T->right->key) 
    {
        T->right = rightRotate(T->right);
        return leftRotate(T);
    }
 
    return T;
}

void Print(Node T)
{
    if (T != NULL)
    {
        Print(T->left);
        cout << T->key << " ";
        Print(T->right);
    }
}

int main()
{
    Node T = NULL;
    T = Insert(T, 50);
    T = Insert(T, 30);
    T = Insert(T, 60);
    T = Insert(T, 20);
    T = Insert(T, 40);
    T = Insert(T, 45);
    T = Insert(T, 35);
    Print(T);
    return 0;
}