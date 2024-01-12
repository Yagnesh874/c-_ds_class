#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *head;
    node *right;
    node *left;
    node()
    {
        head = NULL;
    }
    void createlist();
    void finsert();
    void linsert();
    void display();
    void fdelete();
    void ldelete();
};
void node::display()
{
    node *temp1;
    temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << "->";
        temp1 = temp1->right;
    }
    cout << "NULL";
}
void node::createlist()
{
    node *temp = new node();
    cout << "Enter data  : ";
    cin >> temp->data;
    temp->right = NULL;
    temp->left = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *p = head;

        while (p->right != NULL)
        {
            p = p->right;
        }
        p->right = temp;
        temp->left = p;
    }
    display();
}
void node::finsert()
{
    // node *n = new node();
    // cout << "Enter data : ";
    // cin >> n->data;
    // n->right = NULL;
    // n->left = NULL;
    // if (head == NULL)
    // {
    //     head = n;
    // }
    // else
    // {
    //     n->right = head;
    //     n->left = NULL;
    //     head->left = n;
    //     head = n;
    // }
    node *n = new node();
    cout<<"Enter data : ";
    cin>>n->data;
    n->right = NULL;
    n->left = NULL;

    if(head == NULL)
    {
        head = n;
    }
    else
    {
        n->right = head;
        head->left = n;
        n->left = NULL;
        head=n;
    }
    
    display();
}
void node::linsert()
{
}
void node::fdelete()
{
    node *temp3;
    if(head == NULL)
    {
        cout<<"Empty";
    }
    else
    {
        temp3 = head;
        head = head -> right;
        head->left = NULL;
        free(temp3);
    }
    display();
}
void node::ldelete()
{
    node *temp,*pre;
    if(head == NULL)
    {
        cout<<"empty";
    }
    else
    {
        temp=pre=head;
        while(temp->right != NULL)
        {
            pre = temp;
            temp = temp->right;
        }
        pre -> right = NULL;
        free(temp);
        // free(pre);
    }
}
int main()
{
    node s1;
    int ch;
    while (1)
    {
        cout << "\n1.create list";
        cout << "\n2.insert at first";
        cout << "\n3.insert at last";
        cout << "\n4.display";
        cout << "\n5.delete at first";
        cout << "\n6.delete at last";
        cout << "\n7.exit";
        cout << "\n Enter your choice : ";
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
            s1.display();
            break;
        case 5:
            s1.fdelete();
            break;
        case 6:
            s1.ldelete();
            break;
        case 7:
            exit(0);
            break;
        }
    }
    return 0;
}