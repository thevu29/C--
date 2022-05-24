#include <iostream>
using namespace std;

typedef struct Node* Tree;

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
    Tree p = new(Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void TreeInsert(Tree &T, int k)
{
    if (T == NULL) {
        Tree p = CreatNode(k);
        T = p;
    }
    else if (T->data < k) TreeInsert(T->right, k);
    else TreeInsert(T->left, k);
}

int LeavesSum(Tree T)
{
    if (T == NULL)  
        return 0;
    if (T->left == NULL && T->right == NULL)
        return 1;
    return LeavesSum(T->left) + LeavesSum(T->right);
}

int main ()
{
    Tree T = TreeIntialize(T);
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
    cout << LeavesSum(T);
    return 0;
}   