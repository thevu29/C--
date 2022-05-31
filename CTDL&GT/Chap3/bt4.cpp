#include <iostream>
using namespace std;

typedef struct CELL *List;

struct CELL 
{
    int data;
    List next;
};

List createNode(int k)
{
    List p = new(CELL);
    p->data = k;
    p->next = NULL;
    return p;
}

void insertTail(List &L, int k)
{
    List p = createNode(k);
    if (L == NULL)
        L = p;
    else
    {
        List x = L;
        while (x->next != NULL) x = x->next;
        x->next = p;
        p->next = NULL;
    }
}

void Traverse(List L)
{
    for (List x = L; x != NULL; x = x->next)    
        cout << x->data << " ";
    cout << endl;
}

int Min(List L)
{
    if (L == NULL)  return -1;

    int min = L->data;
    for (List i = L; i != NULL; i = i->next) 
    {
        if (i->data < min)
            min = i->data;
    }

    return min;
}

int main ()
{
    List L = NULL;
    insertTail(L, 16);
    insertTail(L, 2);
    insertTail(L, 3);
    insertTail(L, 48);
    insertTail(L, 27);
    Traverse(L);

    if (Min(L) == -1)
        cout << "Danh sach rong ";
    else 
        cout << Min(L);
    return 0;
}