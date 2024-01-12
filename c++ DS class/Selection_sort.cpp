#include <iostream>
using namespace std;

class Selection_sort
{
    int a[10];
    int n;
    int temp;
public:
    Selection_sort()
    {
        temp = 0;
    }
    void getdata();
    void logic();
    void putdata();
};
void Selection_sort::getdata()
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
void Selection_sort::logic()
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
void Selection_sort::putdata()
{
    int i;
    for (i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}
int main()
{
    Selection_sort obj;
    obj.getdata();
    obj.logic();
    obj.putdata();
    return 0;
}