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

void Swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Sort(List &L)
{
    for (List x = L; x->next != NULL; x = x->next) {
        for (List y = x->next; y != NULL; y = y->next) {
            if (x->data > y->data)
                Swap(x->data, y->data);
        }
    }
}

int main ()
{ 
    List L;
    Intialize(L);
    int n;
    cin >> n;
    Input(L, n);
    cout << "Danh sach: ";
    ListWalk(L); 
    cout << "Danh sach sau khi sort: ";
    Sort(L);
    ListWalk(L); 
    return 0;
}