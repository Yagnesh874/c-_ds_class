#include <iostream>
using namespace std;
class node
{
public:
    int info;
    node *left;
    node *right;
};

node *root = NULL;

void insert(node *, node *);
void postorder(node *);
void preorder(node *);
void inorder(node *);

int main()
{
    int choice, num;
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
        cin >> choice;
        switch (choice)
        {
        case 1:
            temp = new node;
            cout << "Enter the number to be inserted : ";
            cin >> temp->info;
            insert(root, temp);
            break;
        case 2:
            cout << "Postorder Traversal of BST:" << endl;
            postorder(root);
            cout << endl;
            break;
        case 3:
            cout << "Preorder Traversal of BST:" << endl;
            preorder(root);
            cout << endl;
            break;
        case 4:
            cout << "Inorder Traversal of BST:" << endl;
            inorder(root);
            cout << endl;
            break;

        case 5:
            return 0;
        default:
            cout << "Wrong choice" << endl;
        }
    }
}
void insert(node *tree, node *newnode)
{
    if (root == NULL) // 1
    {
        root = newnode;
        root->left = NULL;
        root->right = NULL;
        cout << "Root Node is Added" << endl;
        return;
    }
    if (tree->info == newnode->info) // 2
    {
        cout << "Element already in the tree" << endl;
        return;
    }
    if (newnode->info < tree->info) // 3
    {
        if (tree->left != NULL)
        {
            insert(tree->left, newnode);
        }
        else
        {
            tree->left = newnode;
            newnode->left = NULL;
            newnode->right = NULL;
            cout << "Node Added To Left" << endl;
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            newnode->left = NULL;
            newnode->right = NULL;
            cout << "Node Added To Right" << endl;
            return;
        }
    }
}
void postorder(node *ptr)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    if (ptr != NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->info << "  ";
    }
}
void preorder(node *ptr)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    if (ptr != NULL)
    {
        cout << ptr->info << "  ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void inorder(node *ptr)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout << ptr->info << "  ";
        inorder(ptr->right);
    }
}
