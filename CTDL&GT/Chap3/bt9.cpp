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

void insert_Head(List &L, int k)
{
    List x;
    x = new(CELL);
    x->data = k;
    x->next = L;
    L = x;
}

void Input(List &L, int n)
{
    int data;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert_Head(L, data);
    }
}

void ListWalk(List L)
{
    for (List x = L; x != NULL; x = x->next) {
        cout << x->data << " ";
    }
    cout << endl;
}

void Insert(List &L, int k)
{
    if (L == NULL) {
        L = new(CELL);
        L->data = k;
        L->next = NULL;
    }
    else
        Insert(L->next, k);
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
    Insert(L, 6);
    cout << "Danh sach sau khi them vao cuoi: ";
    ListWalk(L);
    return 0;
}