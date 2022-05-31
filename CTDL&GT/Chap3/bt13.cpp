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

void Sort(LIST &L)
{
    for (LIST x = L; x->next != NULL; x = x->next)
    {
        for (LIST y = x->next; y != NULL; y = y->next)
        {
            if (x->data > y->data)
                swap(x->data, y->data);
        }
    }
}

int main()
{
    LIST L = NULL;
    insertTail(L, 5);
    insertTail(L, 16);
    insertTail(L, 10);
    insertTail(L, 48);
    insertTail(L, 27);
    Sort(L);
    Traverse(L);
    return 0;
}
