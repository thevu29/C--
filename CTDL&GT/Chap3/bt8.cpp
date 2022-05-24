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

int Sum(LIST L)
{
    int s = 0;
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (x->data % 6 == 0)
            s += x->data;
    }
    return s;
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
    Traverse(L);
    cout << Sum(L);
    return 0;
}
