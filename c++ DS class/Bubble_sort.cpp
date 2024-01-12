#include <iostream>
using namespace std;

class Bubble_sort
{
    int a[10];
    int n;
    int temp;

public:
    Bubble_sort()
    {
        temp = 0;
    }
    void getdata();
    void logic();
    void putdata();
};
void Bubble_sort::getdata()
{
    int i;
    cout << "Enter a number";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " ";
        cin >> a[i];
    }
}
void Bubble_sort::logic()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void Bubble_sort::putdata()
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    Bubble_sort obj;
    obj.getdata();
    obj.logic();
    obj.putdata();
    return 0;
}