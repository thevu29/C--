#include <iostream>
using namespace std;

struct Node
{
    float data;
    Node* next;
};

typedef struct Node *LIST;

LIST createNode(float k)
{
    LIST x = new (Node);
    x->data = k;
    x->next = NULL;
    return x;
}

void insertTail(LIST &L, float k)
{
    LIST p = createNode(k);
    if (L == NULL)
        L = p;
    else
    {
        LIST x = L;
        while (x->next != NULL)     
            x = x->next;
        x->next = p;
        p->next = NULL;
    }
}

void Traverse(LIST L)
{
    for (LIST x = L; x != NULL; x = x->next)    
        cout << x->data << " ";
    cout << endl;
}

float Max(LIST L)
{
    float max = L->data;
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (x->data > max)
            max = x->data;
    }
    return max;
}

float Second(LIST L)
{
    float second = L->data, max = Max(L);
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (x->data > second && x->data < max)
            second = x->data;
    }
    return second;
}

void Print(LIST L, float k)
{
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (x->data > k)
            cout << x->data << " ";
    }
    cout << endl;
}

void Del(LIST &L, float k)
{
    if (L != NULL)
    {
        LIST x = L, y = NULL;
        while (x != NULL && x->data != k)
        {
            y = x;
            x = x->next;
        }

        if (y == NULL)
            L = L->next;
        else
            y->next = x->next;
    }
}

void Delete(LIST &L, float k)
{
    for (LIST x = L; x != NULL; x = x->next)
    {
        if (x->data < k)
            Del(L, x->data);
    }
}

int main()
{
    LIST L = NULL;
    insertTail(L, 5);
    insertTail(L, 16);
    insertTail(L, 10);
    insertTail(L, 48);
    insertTail(L, 27);
    Traverse(L);
    cout << Second(L) << endl;
    Print(L, 10);
    Delete(L, 10);
    Traverse(L);
    return 0;
}