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

void Insert(LIST &L, int k, int m)
{
    if (L != NULL)
    {
        LIST x = L;
        while (x != NULL && x->data != m)   x = x->next;

        if (x != NULL)
        {
            LIST p = createNode(k);
            p->next = x->next;
            x->next = p;
        }
    }
}

int main()
{
    int k, m;
    LIST L = NULL;
    insertTail(L, 5);
    insertTail(L, 16);
    insertTail(L, 10);
    insertTail(L, 48);
    insertTail(L, 27);
    Traverse(L);
    cin >> k >> m;
    Insert(L, k, m);
    Traverse(L);
    return 0;
}
