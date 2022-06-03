#include <iostream>
using namespace std;

typedef struct CELL* LIST;

struct CELL
{
    int data;
    LIST prev, next;
};

void Intialize(LIST &L)
{
    L = NULL;
}

LIST ListSearch(LIST L, int k)
{
    LIST x;
    x = L;
    while (x != NULL && x->data != k)
        x = x->next;
    return x;
}

void insert_Head(LIST &L, int k)
{
    LIST x = new(CELL);
    x->data = k;
    x->prev = NULL;
    x->next = L;
    if (L != NULL)  L->prev = x;
    L = x;
}

void ListDelete(LIST &L, int k)
{
    LIST x = L;
    while (x != NULL && x->data != k)   x = x->next;
    if (x != NULL) 
    {
        if (x->prev != NULL) 
            x->prev->next = x->next;
        else 
            L = x->next;
        if (x->next != NULL) 
            x->next->prev = x->prev;
    }
}

int main ()
{
    LIST L;
    return 0;
}