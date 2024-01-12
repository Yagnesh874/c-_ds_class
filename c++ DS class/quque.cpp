// #include <iostream>
// using namespace std;

// class demo
// {
// public:
//     void qneueue();
//     void deueue();
//     void display();
//     int queue[5];
//     int n = 5;
//     int front = -1;
//     int rear = -1;
// };
// void demo::qneueue()
// {
//     // if (rear == n-1)
//     // {
//     //     cout << "empty";
//     // }
//     // else
//     // {
//     //     int value;
//     //     cout << "Enter value";
//     //     cin >> value;
//     //     if (rear == -1)
//     //     {
//     //         front = rear = 0;
//     //     }
//     //     else
//     //     {
//     //         rear = rear + 1;
//     //     }
//     //     queue[rear] = value;
//     // }

//     if (rear == n - 1)
//     {
//         cout << "empty";
//     }
//     else
//     {
//         int value;
//         cout << "Enter value";
//         cin >> value;
//         if (rear == -1)
//         {
//             front=rear=0;
//         }
//         else
//         {
//             rear = rear + 1;

//         }
//         queue[rear] = value;
//     }
// }
// void demo::deueue()
// {
//     //     if (front == -1)
//     //     {
//     //         cout << "empty";
//     //     }
//     //     else
//     //     {
//     //         if (front == rear)
//     //         {
//     //             front = rear = 0;
//     //         }
//     //         else
//     //         {
//     //             front = front + 1;
//     //         }
//     //     }
//     if (front == -1)
//     {
//         cout << "empty";
//     }
//     else
//     {
//         if (front == rear)
//         {
//             front = rear = 0;
//         }
//         else
//         {
//             front = front + 1;
//         }
//     }
// }
// void demo::display()
// {
//     int i;
//     for (i = front; i <= rear; i++)
//     {
//         cout << queue[i] << " ";
//     }
// }
// int main()
// {
//     demo s1;
//     int ch;
//     while (1)
//     {
//         cout << "\n1.enqueue";
//         cout << "\n2.deeueue";
//         cout << "\n3.display";
//         cout << "\nEnter your choice : ";
//         cin >> ch;
//         switch (ch)
//         {
//         case 1:
//             s1.qneueue();
//             break;
//         case 2:
//             s1.deueue();
//             break;
//         case 3:
//             s1.display();
//             break;
//         case 4:
//             exit(0);
//             break;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

class demo
{
public:
    int queue[5];
    int n = 5;
    int front = -1;
    int rear = -1;

    void qneueue()
    {
        if (rear == n - 1)
        {
            cout << "empty";
        }
        else
        {
            int value;
            cout << "Enter value";
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
    void deueue()
    {
        if (front == -1)
        {
            cout << "empty";
        }
        else
        {
            if (front == -1)
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
    demo s1;
    int ch;
    while (1)
    {
        cout << "\n1.enqueue";
        cout << "\n2.deeueue";
        cout << "\n3.display";
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.qneueue();
            break;
        case 2:
            s1.deueue();
            break;
        case 3:
            s1.display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}