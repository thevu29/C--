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

int SumEven(List L)
{
    int s = 0;
    for (List i = L; i != NULL; i = i->next) {
        if (i->data % 2 == 0 && i->data % 3 == 0)
            s += i->data;
    }
    return s;           //T(n) = O(n), n: so phan tu cua dslk
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
    cout << endl << SumEven(L);
    return 0;
}