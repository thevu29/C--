#include <iostream>
#include <math.h>
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

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

void Insert(LIST &L, int k)
{
    LIST p = createNode(k);
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (Prime(x->data) && x->data % 2 != 0)
        {
            p->next = x->next;
            x->next = p;
        }
    }
}

int main()
{
    int k;
    LIST L;
    ListIntialize(L);
    insertTail(L, 16);
    insertTail(L, 2);
    insertTail(L, 3);
    insertTail(L, 48);
    insertTail(L, 27);
    Traverse(L);
    cin >> k;
    Insert(L, k);
    Traverse(L);
    return 0;
}
