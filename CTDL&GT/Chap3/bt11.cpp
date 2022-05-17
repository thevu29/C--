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
    for (List x = L; x != NULL; x = x->next) 
        cout << x->data << " ";
    cout << endl;
}

List Merge(List L1, List L2)
{
    List L = NULL, p = L;
    while (L1 != NULL && L2 != NULL) {
        if (L1->data < L2->data) {
            //p = create_Node(L1->data);
            //p = p->next;
            insert_Tail(L, L1->data);
            L1 = L1->next;
        }
        else {
            //p = create_Node(L2->data);
            //p = p->next;
            insert_Tail(L, L2->data);
            L2 = L2->next;
        }
    }
    while (L1 != NULL) {
        //p = create_Node(L1->data);
        //p = p->next;
        insert_Tail(L, L1->data);
        L1 = L1->next;
    }
    while (L2 != NULL) {
        //p = create_Node(L2->data);
        //p = p->next;
        insert_Tail(L, L2->data);
        L2 = L2->next;
    }
    return L;
}

int main ()
{ 
    List L1, L2;
    Intialize(L1);
    Intialize(L2);
    int n, m;
    cout << "Nhap so phan tu ds1: ";
    cin >> n;
    Input(L1, n);
    cout << "Nhap so phan tu ds2: ";
    cin >> m;
    Input(L2 ,m);
    cout << "Danh sach 1: ";
    ListWalk(L1);   
    cout << "Danh sach 2: ";
    ListWalk(L2);  
    cout << "Dach sach L: ";
    ListWalk(Merge(L1, L2)); 
    return 0;
}