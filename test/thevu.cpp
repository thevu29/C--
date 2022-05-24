#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* creatNode(int k)
{
    Node* p = new(Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void Insert(Node* &T, int k)
{
    if (T == NULL)
    {
        Node* p = creatNode(k);
        T = p;
    }

    else if (k > T->data)    
        Insert(T->right, k);
    else if (k < T->data)
        Insert(T->left, k);
}

int main()
{   
    Node* T = NULL;   
    Insert(T, 12);
    Insert(T, 5);
    Insert(T, 18);
    Insert(T, 2);
    Insert(T, 9);
    Insert(T, 15);
    Insert(T, 20);
    Insert(T, 13);
    Insert(T, 19);
    return 0;
}