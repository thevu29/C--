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

int find_MinEven(List L)
{
    int min = INT_MAX;
    for (List x = L; x != NULL; x = x->next) {
        if (x->data % 2 == 0 && x->data < min)
            min = x->data;
    }
    if (min == INT_MAX)
        return -1;
    return min;
}

int find_MaxEven(List L)
{
    int max = INT_MIN;
    for (List x = L; x != NULL; x = x->next) {
        if (x->data % 2 == 0 && x->data > max)
            max = x->data;
    }
    if (max == INT_MIN)
        return -1;
    return max;
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
    cout << endl;
    cout << find_MinEven(L) << endl;
    cout << find_MaxEven(L) << endl;
    return 0;
}