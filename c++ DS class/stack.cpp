#include <iostream>
using namespace std;
class StackOp
{
    int stack[5];
    int N;
    int top;
    int val;

public:
    StackOp()
    {
        N = 5;
        top = -1;
    }
    void push();
    void pop();
    void peep();
    void change();
    void display();
};

void StackOp ::push()
{
    if (top >= N - 1)
    {
        cout << "The stack is overflow";
    }
    else
    {
        cout << "Enter a value : ";
        cin >> val;
        top = top + 1;
        stack[top] = val;
    }
}
void StackOp::pop()
{
    if (top == -1)
    {
        cout << "The stack is underflow";
    }
    else
    {
        top = top - 1;
    }
}
void StackOp::peep()
{
    int l;
    cout << "Enter a position : ";
    cin >> l;
    if (top - l + 1 < 0)
    {
        cout << "Invalid choice";
    }
    else
    {
        cout << "\n val = " << stack[top - l + 1];
    }
}
void StackOp::change()
{
    int l;
    cout << "Enter a positon : ";
    cin >> l;
    if (top - l + 1 < 0)
    {
        cout << "\n Invalid choice ";
    }
    else
    {
        stack[top - l + 1] = val;
    }
}
void StackOp::display()
{
    if (top == -1)
    {
        cout << "stack full";
    }
    int i;
    for (i = top; i >= 0; i--)
    {
        cout << stack[i];
    }
}
int main()
{

    int ch;
    StackOp obj;
    while (1)
    {
        cout << "\n1.push \n2.pop \n3.peep \n4.change \n5.display \n6.exit";
        cout << "\nEnter a choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.push();
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.peep();
            break;
        case 4:
            obj.change();
            break;
        case 5:
            obj.display();
            break;
        case 6:
            exit(0);
            break;
        }
    }

    return 0;
}