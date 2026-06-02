#include<iostream>
#include<string>
using namespace std;

struct Node
{
    string masv;
    string hoten;
    Node* next;
};

Node* taoNode(string a, string b){
    Node* newNode = new Node;
    newNode->hoten=a;
    newNode->masv=b;
    return newNode;
}
void chendau(Node* &first, string a, string b){
    Node* temp = taoNode(a,b);
    temp=first->next;
    first = temp;
}