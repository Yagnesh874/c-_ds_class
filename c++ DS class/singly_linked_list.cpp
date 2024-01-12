#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *link;
    Node *head;

public:
    Node()
    {
        head = NULL;
    }
    void createlist();
    void finsert();
    void linsert();
    void fdelete();
    void ldelete();
    void search();
    void sort();
    void display();
};
void Node::display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
    cout << "NULL";
}
void Node::createlist()
{
    Node *temp = new Node();
    cout << "Enter data : ";
    cin >> temp->data;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *p = new Node();
        p = head;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
    display();
}
void Node::finsert()
{
    Node *ptr = new Node();
    cout << "Enter data : ";
    cin >> ptr->data;
    ptr->link = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->link = head;
        head = ptr;
    }
    cout << endl;
    display();
}
void Node::linsert()
{
    Node *temp = new Node();
    cout << "Enter data : ";
    cin >> temp->data;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *p = new Node();
        p = head;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
    display();
}
void Node::fdelete()
{
    if (head == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        Node *temp = head;
        head = head->link;
        free(temp);
    }
    display();
}
void Node::ldelete()
{
    if (head == NULL)
    {
        cout << "The list is empty";
    }
    else
    {
        Node *temp, *pre;
        temp = head;
        pre = head;
        while (temp->link != NULL)
        {
            pre = temp;
            temp = temp->link;
        }
        pre->link = NULL;
        free(temp);
    }
    display();
}
void Node::search()
{
    int value;
    int flag = 0;
    Node *temp;
    cout << "Enter value : ";
    cin >> value;

    temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            flag = 1;
        }
        temp = temp->link;
    }
    if (flag == 0)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    display();
}
void Node::sort()
{
    Node *i, *j;
    int temp;
    for (i = head; i != NULL; i = i->link)
    {
        for (j = i; j != NULL; j = j->link)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    display();
}
int main()
{
    Node s1;
    int ch;
    while (1)
    {
        cout << "\n1.create list";
        cout << "\n2.Insert at first";
        cout << "\n3.Insert at last";
        cout << "\n4.Delete at first";
        cout << "\n5.Delete at last";
        cout << "\n6.search";
        cout << "\n7.sort";
        cout << "\n8.display";
        cout << "\n9.exit";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.createlist();
            break;
        case 2:
            s1.finsert();
            break;
        case 3:
            s1.linsert();
            break;
        case 4:
            s1.fdelete();
            break;
        case 5:
            s1.ldelete();
            break;
        case 6:
            s1.search();
            break;
        case 7:
            s1.sort();
            break;
        case 8:
            s1.display();
            break;
        case 9:
            exit(0);
            break;
        }
    }
    return 0;
}
