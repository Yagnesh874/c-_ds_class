#include <iostream>
using namespace std;

class selection
{
public:
    int a[10];
    int n;
    int temp;

    selection()
    {
        temp = 0;
    }
    void getdata();
    void logic();
    void putdata();
};
void selection::getdata()
{
    int i;
    cout << "Enter number";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
}
void selection::logic()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void selection::putdata()
{
    cout << "After sorting";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    selection s1;
    s1.getdata();
    s1.logic();
    s1.putdata();
    return 0;
}