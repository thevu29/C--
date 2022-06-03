#include <iostream>
using namespace std;

struct Linkedlist
{
    int data;
    Linkedlist* next;
};

typedef struct Linkedlist* Node;

Node create_Node(int k)
{
    Node p;
    p = new (Linkedlist);
    p->next = NULL;
    p->data = k;
    return p;
}

Node add_Head(Node head, int k)
{
    Node p = create_Node(k);
    if (head == NULL)   
        head = p;
    else {
        p->next = head;
        head = p;
    }
    return head;
}

Node add_Tail(Node head, int k)
{
    Node p, tmp;
    p = create_Node(k);
    if (head == NULL)
        head = p;
    else 
    {
        tmp = head;
        while (tmp->next != NULL) tmp = tmp->next;
        tmp->next = p;
        p->next = NULL;
    }
    return head;
}

Node Add(Node head, int k, int pos)
{
    if (pos == 0 || head == NULL) 
        head = add_Head(head, k);
    else 
    {
        int x = 1;
        Node tmp = head;

        while (tmp != NULL && x != pos) 
        {
            tmp = tmp->next;
            x++;
        }

        if (x != pos)
            cout << "Vi tri chen khong hop le ";
        else 
        {
            Node p = create_Node(k);
            p->next = tmp->next;
            tmp->next = p;
        }
    }
    return head;
}


Node delete_Head(Node head)
{
    if (head == NULL)
        cout << "Khong co node nao de xoa ";
    else
        head = head->next;
    return head;
}

Node delete_Tail(Node head)
{
    if (head == NULL || head->next == NULL)
        return delete_Head(head);
    Node p = head;
    while (p->next->next != NULL) p = p->next;
    p->next = NULL;
    return head;
}

Node Delete(Node head, int pos)
{
    if (pos == 0 || head == NULL || head->next == NULL)
        return delete_Head(head);
    else 
    {
        Node p = head;
        int k = 1;

        while (p->next->next != NULL && k != pos) 
        {
            p = p->next;
            k++;
        }

        if (k != pos)
            cout << "Vi tri can xoa khong hop le ";
        else 
            p->next = NULL;
    }
    return head;
}

int Get(Node head, int i)
{
    int j = 0;
    Node p = head;
    while (p->next != NULL && j != i) 
    {
        p = p->next;
        j++;
    }
    return p->data;
}   

int Search(Node head, int k)
{
    int pos = 0;
    for (Node p = head; p != NULL; p = p->next) 
    {
        if (p->data == k)
            return pos;
        pos++;
    }
    return -1;
}

Node Input(Node head, int n)
{
    int data;
    head = NULL; 
    for (int i = 0; i < n; i++) 
    {
        cin >> data;
        head = add_Tail(head, data);
    } 
    return head;
}

void print_List(Node head)
{
    for (Node p = head; p != NULL; p = p->next)
        cout << p->data << " ";
    cout << endl;
}

int main ()
{
    int n, k, pos;
    cin >> n;
    Node head = Input(head, n);
    print_List(head);
    cout << "Nhap gia tri va vi tri muon them vao list: ";
    cin >> k >> pos;
    Add(head, k, pos);
    cout << "List sau khi add: ";
    print_List(head);
    return 0;
}