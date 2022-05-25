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

int Sum(Node* T)
{
    if (T != NULL)
    {
        if ( (T->left != NULL && T->right == NULL) || (T->left == NULL && T->right != NULL) )
            return 1 + Sum(T->left) + Sum(T->right);
        return Sum(T->left) + Sum(T->right);
    }
    return 0;
}

int main()
{
    Tree T = TreeIntialize(T);
    TreeInsert(T, 30);
    TreeInsert(T, 20);
    // TreeInsert(T, 15);
    TreeInsert(T, 25);
    TreeInsert(T, 50);
    TreeInsert(T, 40);
    TreeInsert(T, 60);
    TreeInsert(T, 33);
    TreeInsert(T, 45);
    TreeInsert(T, 42);
    // TreeInsert(T, 48);
    cout << Sum(T);
    return 0;
}