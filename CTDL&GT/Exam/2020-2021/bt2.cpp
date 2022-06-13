#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* createNode(int k)
{
    Node* p = new (Node);
    p->data = k;
    p->next = NULL;
    return p;
}

void insertTail(Node* &L, int k)
{
    Node* p = createNode(k);
    if (L == NULL)
        L = p;
    else
    {
        Node* x = L;
        while (x->next != NULL)
            x = x->next;
        x->next = p;
        p->next = NULL;
    }
}

void Insert(Node* &L, int i, int x)
{
    Node* p = createNode(x);
    if (L == NULL)
        return;

    else if (i == 0)
    {
        p->next = L;
        L = p;
    }

    else
    {  
        Node* y = L;
        int pos = 1;     

        while (y != NULL && pos != i)
        {
            y = y->next;
            pos++;
        }

        p->next = y->next;
        y->next = p;
    }
}

int Search(Node* L, int x)
{
    int pos = 0;
    for (Node* i = L; i != NULL; i = i->next)
    {
        if (i->data == x)
            return pos;
        pos++;
    }
    return -1;
}

double Average(Node* L)
{
    int n = 0;
    double s = 0;
    for (Node* x = L; x != NULL; x = x->next)
    {
        s += x->data;
        n++;
    }
    return s / n;
}

void Traverse(Node* L)
{
    for (Node* x = L; x != NULL; x = x->next)
        cout << x->data << " ";
    cout << endl;
}

int main()
{
    Node* L = NULL;
    insertTail(L, 2);
    insertTail(L, 9);
    insertTail(L, 7);
    insertTail(L, 3);
    insertTail(L, 11);
    insertTail(L, 48);
    insertTail(L, 99);
    Traverse(L);
    Insert(L, 0, 4);
    Traverse(L);
    cout << Search(L, 99) << endl;
    cout << Average(L);
    return 0;
}