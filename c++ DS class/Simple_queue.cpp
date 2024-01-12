#include <iostream>
using namespace std;

class simple
{
    int queue[5];
    int N = 5;
    int front = -1;
    int rear = -1;

public:
    void enqueue()
    {
        if (rear == N - 1)
        {
            cout << "queue is overflow";
        }
        else
        {
            int value;
            cout << "\nEnter a value : ";
            cin >> value;
            if (rear == -1)
            {
                front = rear = 0;
            }
            else
            {
                rear = rear + 1;
            }
            queue[rear] = value;
        }
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "\nThe queue is empty";
        }
        else
        {
            if (front == rear)
            {
                front = rear = 0;
            }
            else
            {
                front = front + 1;
            }
        }
    }
    void display()
    {
        int i;
        for (i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
};

int main()
{
    int ch;
    simple s1;
    while (1)
    {
        cout << "\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.enqueue();
            break;
        case 2:
            s1.dequeue();
            break;
        case 3:
            s1.display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}