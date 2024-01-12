#include <iostream>
using namespace std;

class search
{

public:
    void getdata();
    void putdata();
    int size;
    int a[10];
    int search1;
    int s;
    int e;
};

void search::getdata()
{
    cout << "Enter between 1 to 10";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data [" << i << "]";
        cin >> a[i];
    }
    cout << "Enter search to element";
    cin >> search1;
}
void search::putdata()
{
    s = 0;
    e = size - 1;
    int mid = 0;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (search1 > a[mid])
        {
            s = mid + 1;
        }
        else if (search1 < a[mid])
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
    search s1;
    s1.getdata();
    s1.putdata();
    return 0;
}