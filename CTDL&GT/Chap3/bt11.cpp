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

void Traverse(LIST L)
{
    for (LIST x = L; x != NULL; x = x->next)    
        cout << x->data << " ";
    cout << endl;
}

void Merge(LIST &L, LIST L1, LIST L2)
{
    while (L1 != NULL && L2 != NULL)
    {
        if (L1->data > L2->data)
        {
            insertTail(L, L2->data);
            L2 = L2->next;
        }

        else
        {
            insertTail(L, L1->data);
            L1 = L1->next;
        }
    }

    while (L1 != NULL)
    {
        insertTail(L, L1->data);
        L1 = L1->next;
    }

    while (L2 != NULL)
    {
        insertTail(L, L2->data);
        L2 = L2->next;
    }
}

int main()
{
    LIST L, L1, L2;
    ListIntialize(L);
    ListIntialize(L1);
    ListIntialize(L2);
    insertTail(L1, 5);
    insertTail(L1, 10);
    insertTail(L1, 16);
    insertTail(L1, 18);
    insertTail(L1, 27);
    cout << "L1: ";
    Traverse(L1);
    insertTail(L2, 1);
    insertTail(L2, 3);
    insertTail(L2, 32);
    insertTail(L2, 47);
    insertTail(L2, 99);
    cout << "L2: ";
    Traverse(L2);
    Merge(L, L1, L2);
    cout << "L: ";
    Traverse(L);
    return 0;
}
