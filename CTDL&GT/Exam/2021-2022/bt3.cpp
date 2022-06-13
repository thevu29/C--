#include <iostream>
using namespace std;

struct Node
{
    float data;
    Node* left;
    Node* right;
};

typedef struct Node *Tree;

Tree creatNode(float k)
{
    Tree p = new (Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void TreeInsert(Tree &T, float k)
{
    if (T == NULL)
    {
        Tree p = creatNode(k);
        T = p;
    }
    else if (T->data < k)
        TreeInsert(T->right, k);
    else
        TreeInsert(T->left, k);
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

int LeafNode(Tree T)
{
    if (T == NULL)
        return 0;
    if (T->left == NULL && T->right == NULL)
        return 1;
    return LeafNode(T->left) + LeafNode(T->right);
}

void Tiso(Tree T)
{
    int l = LeafNode(T->left), r = LeafNode(T->right);
    cout << r << "/" << l;
}

int main()
{
    Tree T = NULL;
    TreeInsert(T, 50);
    TreeInsert(T, 61);
    TreeInsert(T, 24);
    TreeInsert(T, 13);
    TreeInsert(T, 73);
    TreeInsert(T, 99);
    TreeInsert(T, 51);
    TreeInsert(T, 4);
    TreeInsert(T, 9);
    TreeInsert(T, 10);
    TreeInsert(T, 41);
    TreeInsert(T, 52);
    TreeInsert(T, 64);
    LNR(T);
    cout << endl;
    Tiso(T);
    return 0;
}