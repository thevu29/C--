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

List create_Node(int k)
{
    List p = new(CELL);
    p->data = k;
    p->next = NULL;
    return p;
}

void insert_Tail(List &L, int k)
{
    List p = create_Node(k);
    if (L == NULL)
        L = p;
    else {
        List tmp = L;
        while (tmp->next != NULL) tmp = tmp->next;
        tmp->next = p;
    }
}

void Input(List &L, int n)
{
    int data;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert_Tail(L, data);
    }
}

void ListWalk(List L)
{
    if (L != NULL) {
        cout << L->data << " ";
        ListWalk(L->next);
    }
}

void Delete(List &L, int k)
{
    List x, y;
    x = L;
    y = NULL;
    if (L != NULL) {
        while (x != NULL && x->data != k) {
            y = x;
            x = x->next;
        }
        if (x != NULL) {
            if (y == NULL) L = x->next;
            else y->next = x->next;
            delete x;
        }
    }
}

void delete_Even(List &L)
{
    for (List i = L; i != NULL; i = i->next) {
        if(i->data % 2 == 0)
            Delete(L, i->data);
    }
}

int main ()
{
    int n;
    cin >> n;
    List L;
    Intialize(L);
    Input(L, n);
    cout << "Danh sach: ";
    ListWalk(L);
    delete_Even(L);
    cout << "\nDanh sach sau khi xoa cac phan tu chan: ";
    ListWalk(L);
    return 0;
}