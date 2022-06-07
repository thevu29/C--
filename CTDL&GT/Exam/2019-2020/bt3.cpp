#include <iostream>
#include <math.h>
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

void Traverse(Node* L)
{
    for (Node* x = L; x != NULL; x = x->next)
        cout << x->data << " ";
    cout << endl;
}

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int Count(Node* L)
{
    int cnt = 0;
    for (Node* x = L; x != NULL; x = x->next)
    {
        if(Prime(x->data))
            cnt++;
    }
    return cnt;
}

void Sort(Node* &L)
{
    for (Node* x = L; x->next != NULL; x = x->next)
    {
        for (Node* y = x ->next; y != NULL; y = y->next)
        {
            if (x->data > y->data)
                swap(x->data, y->data);
        }
    }
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
    cout << Count(L) << endl;
    Sort(L);
    Traverse(L);
    return 0;
}