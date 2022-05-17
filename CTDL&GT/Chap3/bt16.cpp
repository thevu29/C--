#include <iostream>
#include <math.h>
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

bool isPrime(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

void Insert(List &L, int k)
{
    List p = create_Node(k);
    for (List x = L; x != NULL; x = x->next) {
        if (x->data % 2 != 0 && isPrime(x->data)) {
            p->next = x->next;
            x->next = p;
            break;
        }
    }
}

int main ()
{ 
    List L;
    Intialize(L);
    int n, k;
    cin >> n;
    Input(L, n);
    cout << "Danh sach: ";
    ListWalk(L); 
    cout << "Nhap k: ";
    cin >> k;
    cout << "Danh sach sau khi chen: ";
    Insert(L, k);
    ListWalk(L); 
    return 0;
}