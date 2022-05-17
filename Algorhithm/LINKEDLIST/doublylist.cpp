#include <iostream>
using namespace std;

struct List
{
    int data;
    List *prev, *next;
};

typedef struct List *node;

void init_List(node &head, node &tail)
{
    head = NULL;
    tail = NULL;
}

node creat_Node(int k)
{
    node p = new(List);
    p->data = k;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

node insert_Head(node head, int k)
{
    node p = creat_Node(k);
    if (head == NULL)   
        head = p;
    else {
        head->prev = p;
        p->next = head;     
        head = p;
    }
    return head;
}

node insert_Tail(node tail, int k)
{
    node p = creat_Node(k);
    if (tail == NULL)
        tail = p;
    else {
        tail->next = p;
        p->prev = tail;
        tail = p;
    }
    return tail;
}

int main ()
{
    node head;
    return 0;
}