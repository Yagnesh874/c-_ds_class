#include <iostream>
using namespace std;

class node
{
    int data;
    node *right;
    node *left;
};

node *root = NULL;

void insert(node *, node *);
void preorder(node *);
void preorder(node *);
void inorder(node *);
int main()
{
    int ch;
    node *temp;
    while (1)
    {
        cout << "-----------------" << endl;
        cout << "Operations on BST" << endl;
        cout << "-----------------" << endl;
        cout << "1.Insert Element " << endl;
        cout << "2.Postorder Traversal" << endl;
        cout << "3.Preorder Traversal" << endl;
        cout << "4.Inorder Traversal" << endl;
        cout << "5.Quit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            temp = new node();
            
        }
    }
    return 0;
}