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

int Sum(Tree T)
{
    if (T == NULL)   return 0;
    return T->data + Sum(T->left) + Sum(T->right);
}

int main ()
{
    Tree T = TreeIntialize(T);
    TreeInsert(T, 25);
    TreeInsert(T, 15);
    TreeInsert(T, 50);
    TreeInsert(T, 10);
    TreeInsert(T, 22);
    TreeInsert(T, 35);
    TreeInsert(T, 70);  
    cout << Sum(T);
    return 0;
}