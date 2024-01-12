

#include <iostream>
using namespace std;

class Binary_search
{
    int a[10];
    int search;
    int size;
    int low;
    int high;
    int mid;

public:
    void getdata();
    void putdata();
};
void Binary_search::getdata()
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
    cout << "Enter search element : ";
    cin >> search;
}
void Binary_search::putdata()
{
    low = 0;
    high = size - 1;
    mid = 0;
    while (low <= high)
    {

        {
            mid = (low + high) / 2;
        }
        if (search > a[mid])
        {
            low = mid + 1;
        }
        else if (search < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << "The element is found";
            break;
        }
    }
    if (low > high)
    {
        cout << "The element is not found";
    }
}
int main()
{
    Binary_search obj;
    obj.getdata();
    obj.putdata();
    return 0;
}