#include <iostream>
using namespace std;

typedef struct CELL *LIST;

struct CELL
{
    int data;
    LIST next;
};

LIST createNode(int k)
{
    LIST x = new (CELL);
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

void Delete(LIST &L, int k)
{
    if (L != NULL)
    {
        LIST x = L, y = NULL;

        while (x != NULL && x->data != k)
        {
            y = x;
            x = x->next;
        }

        if (x != NULL)
        {
            if (y == NULL)
                L = x->next;
            else
                y->next = x->next;
        }
    }
}

void deleteEven(LIST &L)
{
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (x->data % 2 == 0)
            Delete(L, x->data);
    }
}

int main()
{
    LIST L = NULL;
    insertTail(L, 10);
    insertTail(L, 5);
    insertTail(L, 2);
    insertTail(L, 14);
    insertTail(L, 7);
    Traverse(L);
    deleteEven(L);
    Traverse(L);
    return 0;
}
