#include <iostream>
using namespace std;

char stack[10];
int top = -1;
void push(char ch)
{
    top = top + 1;
    stack[top] = ch;
}
void pop()
{
    cout << stack[top];
    top = top - 1;
}
int main()
{
    char str[10];
    int i;
    cout << "Enter a string : ";
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }
    while (top >= 0)
    {
        pop();
    }
    return 0;
}