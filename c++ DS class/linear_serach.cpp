#include <iostream>
using namespace std;

class Linear_search
{
    int a[10];
    int search;
    int size;
    bool flag;

public:
    Linear_search()
    {
        flag = false;
    }
    void getdata();
    void logic();
};
void Linear_search::getdata()
{
    int i;
    cout << "Enter a number between 1 to 10 : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " ";
        cin >> a[i];
    }
    cout << "Enter search elements : ";
    cin >> search;

    if(search < 0)
    {
        cout<<"\nonly positive value allowed";
    }
}
void Linear_search::logic()
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (search == a[i])
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "Found element";
    }
    else
    {
        cout << "Not found element";
    }
}
int main()
{
    Linear_search obj;
    obj.getdata();
    obj.logic();
    return 0;
}