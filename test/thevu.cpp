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
        while (x->next != NULL) x = x->next;
        x->next = p;
        p->next = NULL;
    }
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

void Insert(Node* &L, int k)
{
    Node* p = createNode(k);
    if (L != NULL)
    {
        for (Node* x = L; x != NULL; x = x->next)
        {
            if (Prime(x->data) && x->data % 2 != 0)
            {
                p->next = x->next;
                x->next = p;
                break;
            }
        }
    }
}

void Traverse(Node* L)
{
    for (Node* x = L; x != NULL; x = x->next)
    {
        cout << x->data << " ";
    }
    cout << endl;
}

int main()
{   
    Node* L = NULL;
    insertTail(L, 2);
    insertTail(L, 3);
    insertTail(L, 4);
    insertTail(L, 18);
    insertTail(L, 7);
    insertTail(L, 44);
    insertTail(L, 36);
    insertTail(L, 99);
    Traverse(L);
    Insert(L, 55);
    Traverse(L);
    return 0;
}