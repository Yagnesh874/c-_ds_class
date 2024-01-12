#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
    node *head;

    node()
    {
        head = NULL;
    }
    void creatlist();
    void finser();
    void linsert();
    void fdelete();
    void ldelete();
    void display();
};
void node::creatlist()
{
    node *temp = new  node();
    cout<<"Enter data";
    cin>>temp->data;
    temp->link = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        node *p  = new node();
        p = head;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}
void node::finser()
{
    node *temp = new node();
    cout<<"Enter data";
    cin>>temp->data;
    temp->link = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
       temp->link = head;
       head = temp;
    }
}
void node::linsert()
{
}
void node::fdelete()
{
}
void node::ldelete()
{
}
void node::display()
{
    node *p = new node();
    p = head;
    while(p != NULL)
    {
        cout<<p->data<<"->";
        p = p->link;
    }
    cout<<"NULL";
}
int main()
{
    node s1;
    int ch;
    while (1)
    {
        cout << "\n1.create list";
        cout << "\n2.first insert";
        cout << "\n3.last insert";
        cout << "\n4.first delet";
        cout << "\n5.last delete";
        cout << "\n6.display";
        cout << "\n7.exit";
        cout<<"\nEnter your choie : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.creatlist();
            break;
        case 2:
            s1.finser();
            break;
        case 3:
            s1.linsert();
            break;
        case 4:
            s1.fdelete();
            break;
        case 5:
            s1.linsert();
            break;
        case 6:
            s1.display();
            break;
        case 7:
            exit(0);
            break;
        }
    }
}