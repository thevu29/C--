#include <iostream>
using namespace std;

struct Phanso
{
    int tu;
    int mau;
};

struct Node
{
    Phanso data;
    Node* next;
};

typedef struct Node* List;

List createNode(int x, int y)
{
    List p = new (Node);
    p->data.tu = x;
    p->data.mau = y;
    p->next = NULL;
    return p;
}

void Insert(List &L, int x, int y)
{
    List p = createNode(x, y);
    if (L == NULL)
        L = p;
    else
    {
        List x = L;
        while (x->next != NULL) 
            x = x->next;
        x->next = p;
    }
}

void Traverse(List L)
{
    for (List x = L; x != NULL; x = x->next)
    {
        cout << x->data.tu << "/" << x->data.mau << " ";
    }
    cout << endl;
}

void Max(List L)
{
    Phanso max = L->data;
    for (List x = L; x != NULL; x = x->next)
    {
        if ( (x->data.tu * 1.0 / x->data.mau) > (max.tu * 1.0 / max.mau) )
            max = x->data;
    }
    cout << max.tu << "/" << max.mau << endl;
}

int Count(List L)
{
    double p;
    int cnt = 0;
    for (List x = L; x != NULL; x = x->next)
    {
        p = x->data.tu * 1.0 / x->data.mau;
        if (p > 0 && p < 1)
            cnt++;
    }
    return cnt;
}

int main()
{
    List L = NULL;
    Insert(L, 1, 2);
    Insert(L, 3, 5);
    Insert(L, 2, 7);
    Insert(L, 4, 3);
    Insert(L, 7, 9);
    Insert(L, 1, 3);
    Traverse(L);
    Max(L);
    cout << Count(L);
    return 0;
}