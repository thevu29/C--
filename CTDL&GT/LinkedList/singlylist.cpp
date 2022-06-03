#include <iostream>
using namespace std;

typedef struct CELL* LIST;

struct CELL
{
    int data;
    LIST next;
};

void ListIntialize(LIST &L)
{
    L = NULL;
}

LIST creatNode(int k)
{
    LIST x = new (CELL);
    x->data = k;
    x->next = NULL;
    return x;
}

LIST ListSearch(LIST L, int k)
{
    LIST x;
    x = L;
    while (x != NULL && x->data != k)
        x = x->next;
    return x;
}

void insertHead(LIST &L, int k)
{
    LIST x;
    x = new (CELL);
    x->data = k;
    x->next = L;
    L = x;
}

void insertTail(LIST &L, int k)
{
    LIST p = creatNode(k);
    if (L == NULL)
        L = p;
    else
    {
        LIST x = L;
        while (x->next != NULL)
            x = x->next;
        x->next = p;
        p->next = NULL;
    }
}

void ListDelete(LIST &L, int k)
{
    if (L != NULL)
    {
        LIST x, y;
        y = NULL;
        x = L;

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
            delete x;
        }
    }
}

void ListWalk(LIST L)
{
    if (L != NULL)
    {
        cout << L->data << " ";
        ListWalk(L->next);
    }
}

int main()
{
    LIST L;
    ListIntialize(L);
    ListWalk(L);
    return 0;
}
