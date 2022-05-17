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

void Insert(List &L, int k)
{
    List x = L, y = NULL, p = create_Node(k);
    while (x != NULL && x->data < k) {
        y = x;
        x = x->next;
    }
    if (y == NULL) {
        p->next = L;
        L = p;
    }
    else {
        p->next = x;
        y->next = p;
    }
}

int main ()
{
    int n, k;
    cin >> n;
    List L;
    Intialize(L);
    Input(L, n);
    cout << "Danh sach: ";
    ListWalk(L);   
    cout << "Nhap k: ";
    cin >> k;
    Insert(L, k);
    cout << "Danh sach sau khi chen: ";
    ListWalk(L); 
    return 0;
}