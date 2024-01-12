#include <iostream>
using namespace std;

class sort
{
public:
    int a[10];
    int temp;
    int n;
    sort()
    {
        temp = 0;
    }
    void getdata();
    void logic();
    void putdata();
};
void sort::getdata()
{
    int i;
    cout << "Enter number";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " : ";
        cin >> a[i];
    }
}
void sort::logic()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void sort::putdata()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    sort s1;
    s1.getdata();
    s1.logic();
    s1.putdata();
    return 0;
}