#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int k)
{
    Node* p = new (Node);
    p->data = k;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void TreeInsert(Node* &T, int k)
{
    Node* p = createNode(k);
    if (T == NULL)  
        T = p;
    else
    {
        if (k > T->data)
            TreeInsert(T->right, k);
        else 
            TreeInsert(T->left, k);
    }
}

int countOdd(Node* T)
{
    if (T == NULL)
        return 0;
    if (T->data % 2 != 0)
        return 1 + countOdd(T->left) + countOdd(T->right);
    return countOdd(T->left) + countOdd(T->right);
}

int count1Sub(Node* T)
{
    if (T == NULL)
        return 0;
    if ( (T->left != NULL && T->right == NULL) || (T->left == NULL && T->right != NULL) )
        return 1 + count1Sub(T->left) + count1Sub(T->right);
    return count1Sub(T->left) + count1Sub(T->right);
}

int Count(Node* T, int y, int x)
{   
    if (T == NULL || y > x)
        return 0;
    if (T->data < x && T->data > y)
        return 1 + Count(T->left, y, x) + Count(T->right, y, x);
    return Count(T->left, y, x) + Count(T->right, y, x);
}

int main()
{
    Node* T = NULL;
    TreeInsert(T, 7);
    TreeInsert(T, 2);
    TreeInsert(T, 34);
    TreeInsert(T, 1);
    TreeInsert(T, 6);
    TreeInsert(T, 15);
    TreeInsert(T, 41);
    TreeInsert(T, 9);
    TreeInsert(T, 12);
    TreeInsert(T, 45);
    cout << countOdd(T) << endl;
    cout << count1Sub(T) << endl;
    cout << Count(T, 12, 45);
    return 0;
}