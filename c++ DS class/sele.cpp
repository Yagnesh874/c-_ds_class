#include<iostream>
using namespace std;

class selection
{
    public:
    int a[10];

    void getdata();
    void logic();
    void putdata();
};
void selection::getdata()
{
    for(int i=0;i<5;i++)
    {
        cout<<"Enter elements : "<<"["<<i<<"]";
        cin>>a[i];
    }
}
void selection::logic()
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i] > a[j])
            {
                int temp  = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void selection::putdata()
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
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