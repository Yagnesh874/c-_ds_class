#include <iostream>
using namespace std;

class node
{
    int data;
    node *lptr;
    node *rptr;
} *root;

void insert();
void inorder(node *);
void preorder(node *);
void postorder(node *);

int main()
{
    int ch;
    node s1;
    while (1)
    {
        cout << "\n1.insert";
        cout << "\n2.inorder";
        cout << "\n3.postorder";
        cout << "\n4.preoder";
        cout << "\n5.exit";
        cout << "\nEnter choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            exit(0);
            break;

        default:
            break;
        }
    }
    return 0;
}

void postorder(node *root)
{
    if(root == NULL)
    {
        cout<<"\nTree is empty";
    }
    else
    {
        if(root->lptr != NULL)
        {

        }
    }
}