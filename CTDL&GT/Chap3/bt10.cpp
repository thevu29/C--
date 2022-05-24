#include <iostream>
using namespace std;

typedef struct CELL *LIST;

struct CELL
{
    int data;
    LIST next;
};

void ListIntialize(LIST &L)
{
    L = NULL;
}

LIST createNode(int k)
{
    LIST x = new(CELL);
    x->data = k;
    x->next = NULL;
    return x;
}

void insertTail(LIST &L, int k)
{
    LIST p = createNode(k);
    if (L == NULL)
        L = p;
    else
    {
        LIST x = L;
        while (x->next != NULL) x = x->next;
        x->next = p;
        p->next = NULL;
    }
}

void Insert(LIST &L, int k)
{
    LIST x = L, y = NULL, p = createNode(k);

    while (x != NULL && x->data < k)
    {
        y = x;
        x = x->next;
    }

    if (y == NULL)  
    {
        p->next = L;
        L = p;
    }

    else
    {
        y->next = p;
        p->next = x;
    }
}

void Traverse(LIST L)
{
    for (LIST x = L; x != NULL; x = x->next)    
        cout << x->data << " ";
    cout << endl;
}

int main()
{
    LIST L; 
    ListIntialize(L);
    insertTail(L, 1);
    insertTail(L, 2);
    insertTail(L, 4);
    insertTail(L, 6);
    insertTail(L, 7);
    Traverse(L);
    Insert(L, 5);
    Traverse(L);
    return 0;
}