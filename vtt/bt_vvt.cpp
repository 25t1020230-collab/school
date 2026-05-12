#include <iostream>
#include <string>
using namespace std;

struct node
{
    int val;
    node *next;
};
void insertnumber(node *&f, int nb)
{
    node *newnode = new node;
    newnode->val = nb;
    newnode->next = f;
    f = newnode;
}
void display(node *f)
{
    node *p = f;
    while (p != NULL)
    {
        cout << p->val << "    ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    node *f = NULL;
    string cmd;
    while (true)
    {
        cout << "-> ";
        cin >> cmd;
        if (cmd == "insert")
        {
            int nb;
            cin >> nb;
            insertnumber(f, nb);
        }
        else if (cmd == "display")
        {
            if (f == NULL)
            {
                cout << "Danh sach rong!" << endl;
            }
            else
                display(f);
        }
        else if (cmd == "finish")
        {
            cout<<"Bye";
            break;
        }
        else
        {
            cout << "Nhap lai (insert/display/finish)!"<<endl;
            cout<<"Ex: insert 10";
            cout << endl;
        }
    }
    return 0;
}