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

int FindHeight(Tree T)
{
    if (T == NULL)
        return -1;
    else
    {
        int l = FindHeight(T->left);
        int r = FindHeight(T->right);
        if (l > r)
            return l + 1;
        return r + 1;
    }
}

int HeightTree(Tree T)
{
    if (T == NULL)
        return -1;
    return max(HeightTree(T->left), HeightTree(T->right)) + 1;
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
    cout << HeightTree(T);
    return 0;
}