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

typedef struct Cell *List;

struct Cell
{
    int data;
    List next;
};

List ListIntialize(List L)
{
    L = NULL;
    return L;
}

void ListInsert(List &L, int k)
{
    List x = new (Cell);
    x->data = k;
    x->next = L;
    L = x;
}

void CreatList(List &L, Tree T)
{
    if (T != NULL)
    {
        CreatList(L, T->right);
        ListInsert(L, T->data);
        CreatList(L, T->left);
    }
}

void ListWalk(List L)
{
    for (List x = L; x != NULL; x = x->next)
        cout << x->data << " ";
}

int main()
{
    Tree T = TreeIntialize(T);
    List L = ListIntialize(L);
    TreeInsert(T, 12);
    TreeInsert(T, 5);
    TreeInsert(T, 18);
    TreeInsert(T, 29);
    TreeInsert(T, 2);
    CreatList(L, T);
    ListWalk(L);
    return 0;
}