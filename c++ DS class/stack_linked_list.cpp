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

    void push();
    void pop();
    void display();
    void peek();
};
void node::display()
{
    if (head == NULL)
    {
        cout << "empty";
    }
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
}
void node::push()
{
    node *temp = new node();
    cout << "Enter value: ";
    cin >> temp->data;
    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->link = head;
        head = temp;
    }
    display();
}
void node::pop()
{
    if (head == NULL)
    {
        cout << "Empty";
    }
    else
    {
        node *temp = head;
        head = head->link;
        free(temp);
    }
    display();
}

void node::peek()
{
    if (head == NULL)
    {
        cout << "empty";
    }
    else
    {
        cout << "top element is : " << head->data;
    }
    display();
}
int main()
{
    int ch;
    node s1;
    while (1)
    {
        cout << "\n1.push";
        cout << "\n2.pop";
        cout << "\n3.display";
        cout << "\n4.peek";
        cout << "\n5.exit";
        cout << "\nEnter your choice";
        cin >> ch;

        switch (ch)
        {
        case 1:
            s1.push();
            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.display();
            break;
        case 4:
            s1.peek();
            break;
        case 5:
            exit(0);
            break;
        }
    }
    return 0;
}