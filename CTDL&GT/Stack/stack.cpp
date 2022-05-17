#include <iostream>
using namespace std;
#define MAX 100

struct Stack
{
    int a[MAX];
    int top;
    int n;
};

void init_Stack(Stack &S)
{
    S.top = 0;
    cout << "Nhap so phan tu: ";
    cin >> S.n;
}

bool StackEmpty(Stack S)
{
    if (S.top == 0) 
        return true;
    return false;
}

bool StackFull(Stack S)
{
    if (S.top >= S.n)
        return true;
    return false;
}

void Push(Stack &S, int k)
{
    if (StackFull(S))   
        cout << "Overflows ";
    else {
        S.top++;
        S.a[S.top] = k;
    }
}

void Pop(Stack &S)
{
    if (StackEmpty(S)) 
        cout << "Underflows "; 
    else 
        S.top--;
}

int main ()
{
    Stack S;
    init_Stack(S);
    int k;
    for (int i = 1; i <= S.n; i++) {
        cin >> k;
        Push(S, k);
    }
    Pop(S);     
    for (int i = 1; i <= S.n; i++) 
        cout << S.a[i] << " ";
    return 0;
}