#include <iostream>
using namespace std;

int queue[5];
int N = 5;
int front = -1;
int rear = -1;
void display()
{
    int i;
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
    else
    {
        for (i = front; i < N - 1; i++)
        {
            cout << queue[i] << " ";
        }
        for (i = 0; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
}
void enqueue()
{
    int value;
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        cout << "\nqueue overflow";
    }
    else
    {
        cout << "\nenter value : ";
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
    display();
}
void dequeue()
{
    if (front == -1)
    {
        cout << "\nQueue is empty";
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == N - 1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
    display();
}

int main()
{
    int ch;
    while (1)
    {
        cout << "\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}