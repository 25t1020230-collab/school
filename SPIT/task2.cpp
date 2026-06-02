#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int ID;
    Node *next;
};

Node *F = NULL;

Node *taoNode(Node *&F, int x)
{
    Node *newNode = new Node;
    newNode->ID = x;
    newNode->next = NULL;
    return newNode;
}
// Loai 1
void chenDau(Node *&F, int x)
{
    Node *p = taoNode(F, x);
    if (F == NULL)
    {
        F = p;
    }
    else
    {
        p->next = F;
        F = p;
    }
}
// Loai 2
void timX(Node *&F, int x)
{
    Node *findX = taoNode(F, x);
    Node *temp = F;
    while (temp != NULL)
    {
        if (temp->ID == x)
        {
            findX->next = F;
            F = findX;
            break;
        }
        temp = temp->next;
    }
}
// Loai 3
void reverse(Node* &F, int m, int n)
{   
    if(m<n){
    for(int i=1; i<n-1;i++){
        if(i == m){
            for(Node* temp = F;temp->ID!=n;temp= temp->next){
                Node* prev = NULL;
                Node* cur = temp;
                Node* next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
        }
    }
}}
int main()
{

    return 0;
}