#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *rptr;
    node *lptr;

    void finsert();
    void linsert();
    void fdelete();
    void ldelete();
    void display();
};
node *head = NULL;
void node::display()
{
    node *temp;
    temp = head;
    while (temp->rptr != head)
    {
        cout << temp->data;
        temp = temp->rptr;
    }
}
void node::finsert()
{
    node *temp = new node();
    node *n = new node();
    cout << "Enter data : ";
    cin >> n->data;
    n->rptr = NULL;
    n->lptr = NULL;

    if (head == NULL)
    {
        head = n;
        head->rptr = head;
        head->lptr = head;
    }
    else
    {
        temp = head;
        while (temp->rptr != head)
        {
            temp = temp->rptr;
        }
        n->rptr = head;
        head->lptr = n;
        head = n;
        temp->rptr = head;
        head->lptr = temp;
    }
    display();
}
void node::linsert()
{
    node *temp = new node();
    node *n = new node();
    cout << "Enter data : ";
    cin >> n->data;
    n->rptr = NULL;
    n->lptr = NULL;

    if (head == NULL)
    {
        head = n;
        head->rptr = head;
        head->lptr = head;
    }
    else
    {
        temp = head;
        while (temp->rptr != head)
        {
            temp = temp->rptr;
        }
        temp->rptr = n;
        n->lptr = temp;
        n->rptr = head;
        head->lptr = n;
    }
    display();
}
void node::fdelete()
{
}
void node::ldelete()
{
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
}