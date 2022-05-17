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
        while (x && x->data != k) {
            y = x;
            x = x->next;
        }
        if (x != NULL) {
            if (y == NULL)  L = x->next;
            else    y->next = x->next;
            delete(x);
        }
    }
}

LIST ListSearch(LIST L, int k)
{
    LIST x;
    x = L;
    while (x != NULL && x->data != k)
        x = x->next;
    return x;
}

void Input(LIST &L, int n)
{
    int data;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert_Head(L, data);
    }
}

void ListWalk(LIST L)
{
    if (L != NULL) {
        cout << L->data << " ";
        ListWalk(L->next);
    }
}

int main()
{
    int n, k;
    cin >> n;
    LIST L;
    ListIntialize(L);
    Input(L, n);
    cout << "danh sach: ";
    ListWalk(L);
    cout << "\nNhap k: ";
    cin >> k;
    if(ListSearch(L, k))
        cout << "tim thay ";
    else 
        cout << "kh tim thay ";
    ListDelete(L, k);
    cout << "\nds sau khi xoa: ";
    ListWalk(L);
    return 0;
}