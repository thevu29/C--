#include <iostream>
using namespace std;

typedef struct CELL *List;

struct CELL
{
    int data;
    List next;
};

void Intialize(List &L)
{
    L = NULL;
}

List createNode(int k)
{
    List p = new (CELL);
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
        while (x->next != NULL)
            x = x->next;
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

int MinEven(List L)
{
    int min = INT_MAX;

    for (List x = L; x != NULL; x = x->next)
    {
        if (x->data % 2 == 0 && x->data < min)
            min = x->data;
    }

    if (min == INT_MAX)
        return -1;
    return min;
}

int MaxEven(List L)
{
    int max = INT_MIN;

    for (List x = L; x != NULL; x = x->next)
    {
        if (x->data % 2 == 0 && x->data > max)
            max = x->data;
    }

    if (max == INT_MIN)
        return -1;
    return max;
}

int main()
{
    List L;
    Intialize(L);
    insertTail(L, 16);
    insertTail(L, 2);
    insertTail(L, 3);
    insertTail(L, 48);
    insertTail(L, 27);
    Traverse(L);
    cout << MinEven(L) << endl;
    cout << MaxEven(L);
    return 0;
}