#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;

    void finsert();
    void linsert();
    void fdelete();
    void ldelete();
    void display();
};
node *head = NULL;
node *last = NULL;

void node::display()
{
    node *temp = head;
    while (temp->link != head)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
    cout << temp->data << "->";
}
void node::finsert()
{
    node *temp = new node();
    node *t = new node();
    cout << "Enter number : ";
    cin >> temp->data;
    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
        head->link = head;
    }
    else
    {
        t = head;
        while (t->link != head)
        {
            t = t->link;
        }
        temp->link = head;
        head = temp;

        t->link = head;
    }
    display();
}
void node::linsert()
{
    node *tmp = new node();
    node *n = new node();
    cout << "Enter data : ";
    cin >> n->data;
    n->link = NULL;

    if (head == NULL)
    {
        head = n;
        head->link = head;
    }
    else
    {
        tmp = head;
        while (tmp->link != head)
        {
            tmp = tmp->link;
        }
        tmp->link = n;
        n->link = head;
    }
    display();
}
void node::fdelete()
{
     node *temp;
    node *ndelete;
    if (head == NULL)
    {
        cout << "empty";
    }
    else
    {
        temp = head;
        while (temp->link != head)
        {
            temp = temp->link;
        }
        ndelete = head;
        head = head->link;
        temp->link = head;
        free(ndelete);
    }
    display();
}
void node::ldelete()
{
    if(head == NULL)
    {
        cout<<"empty";
    }
    else
    {
        node *pre = head;
        node *temp = head;

        while(temp->link != head)
        {
            pre = temp;
            temp = temp->link;
        }
        pre->link = head;
        free(temp);
    }
}
int main()
{
    node s1;
    int ch;

    while (1)
    {
        cout << "\n1.insert at first";
        cout << "\n2.insert at last";
        cout << "\n3.delete at first";
        cout << "\n4.delete at last";
        cout << "\n5.display";
        cout << "\n6.exit";
        cout << "\nEnter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            s1.finsert();
            break;
        case 2:
            s1.linsert();
            break;
        case 3:
            s1.display();
            break;
        case 4:
            s1.fdelete();
            break;
        case 5:
            s1.ldelete();
            break;
        case 6:
            exit(0);
            break;
        }
    }
    return 0;
}