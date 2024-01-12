#include <iostream>
using namespace std;

class Insertion_sort
{
    int a[10];
    int n, i, j, index;

public:
    void getdata();
    void logic();
    void putdata();
};
void Insertion_sort::getdata()
{
    cout << "Enter number : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " : ";
        cin >> a[i];
    }
}
void Insertion_sort::logic()
{
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        index = a[i];
        while (j >= 0 && a[j] >= index)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = index;
    }
}
void Insertion_sort::putdata()
{
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    Insertion_sort obj;
    obj.getdata();
    obj.logic();
    obj.putdata();
    return 0;
}