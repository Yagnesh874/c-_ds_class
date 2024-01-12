// #include <iostream>
// using namespace std;

// class binary_search
// {
// public:
//     int a[10];
//     int search;
//     int s = 0;
//     int e = 0;
//     int mid = 0;
//     int n;
//     void getdata();
//     void logic();
// };
// void binary_search::getdata()
// {
//     cout<<"Enter number between 1 to 10";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter elements : "
//              << "[" << i << "]";
//         cin >> a[i];
//     }
//     cout << "Enter search element in the array";
//     cin >> search;
// }
// void binary_search::logic()
// {
//     s = 0;
//     e = n-1;
//     while(s<=e)
//     {
//         mid = (s+e)/2;
//         if(search > a[mid])
//         {
//             s = mid+1;
//         }
//         else if(search < a[mid])
//         {
//             e = mid-1;
//         }
//         else{
//             cout<<"found";
//             break;
//         }
//     }
//     if(s>e)
//     {
//         cout<<"Not found";
//     }
// }
// int main()
// {
//     binary_search s1;
//     s1.getdata();
//     s1.logic();
//     return 0;
// }

#include <iostream>
using namespace std;

class binary
{
public:
    int a[10];
    int n;
    int s = 0;
    int e = 0;
    int mid = 0;
    int search;
    void getdata();
    void logic();
};
void binary::getdata()
{
    cout << "Enter number between 1 to 10 : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements : "
             << "[" << i << "]";
        cin >> a[i];
    }
    cout << "Enter search elements : ";
    cin >> search;
}
void binary::logic()
{
    s = 0;
    e = n - 1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (search > a[mid])
        {
            s = mid + 1;
        }
        else if (search < a[mid])
        {
            e = mid - 1;
        }
        else
        {
            cout << "found";
            break;
        }
    }
    if (s > e)
    {
        cout << "not found";
    }
}
int main()
{
    binary s1;
    s1.getdata();
    s1.logic();
    return 0;
}