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
    if (L == NULL)
        L = createNode(k);
    else    
        insertTail(L->next, k);
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
    insertTail(L, 10);
    insertTail(L, 5);
    insertTail(L, 6);
    insertTail(L, 18);
    insertTail(L, 7);
    insertTail(L, 2);
    Traverse(L);
    return 0;
}
