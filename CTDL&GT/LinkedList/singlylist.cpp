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
    LIST x;
    x = new(CELL);
    x->data = k;
    x->next = L;
    L = x;
}

void ListDelete(LIST &L, int k)
{
    LIST x, y;
    if (L != NULL) {
        y = NULL;
        x = L;
        while (x != NULL && x->data != k) {
            y = x;
            x = x->next;
        }
        if (x != NULL) {
            if (y == NULL)  L = x->next;
            else y->next = x->next;
            delete x;
        }
    }
}

void ListWalk(LIST L)
{
    if (L != NULL) {
        cout << L->data << " ";
        ListWalk(L->next);
    }
}

int Sum(LIST L)
{
    int s = 0;
    for (LIST x = L; x != NULL; x = x->next) 
        s += x->data;
    return s;
}

int main()
{
    LIST L;
    ListIntialize(L);
    ListWalk(L);
    cout << Sum(L);
    return 0;
}
