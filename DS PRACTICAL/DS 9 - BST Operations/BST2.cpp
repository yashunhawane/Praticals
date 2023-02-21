#include<iostream>
#include<stdlib.h>
using namespace std;
struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};
treeNode* FindMin(treeNode *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
        return FindMin(node->left);
    else
        return node;
}
treeNode* FindMax(treeNode *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->right)
        return(FindMax(node->right));
    else
        return node;
}
treeNode *Insert(treeNode *node,int data)
{
    if(node==NULL)
    {
        treeNode *temp;
        temp=new treeNode;
        temp -> data = data;
        temp -> left = temp -> right = NULL;
        return temp;
    }
    if(data >(node->data))
    {
        node->right = Insert(node->right,data);
    }
    else if(data < (node->data))
    {
        node->left = Insert(node->left,data);
    }
    return node;
}
treeNode * Delet(treeNode *node, int data)
{
    treeNode *temp;
    if(node==NULL)
    {
        cout<<"Element Not Found";
    }
    else if(data < node->data)
    {
        node->left = Delet(node->left, data);
    }
    else if(data > node->data)
    {
        node->right = Delet(node->right, data);
    }
    else
    {
        if(node->right && node->left)
        {
            temp = FindMin(node->right);
            node -> data = temp->data;
            node -> right = Delet(node->right,temp->data);
        }
        else
        {
            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            free(temp);
        }
    }
    return node;
}
treeNode * Find(treeNode *node, int data)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(data > node->data)
    {
        return Find(node->right,data);
    }
    else if(data < node->data)
    {
        return Find(node->left,data);
    }
    else
    {
        return node;
    }
}
void Inorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Preorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
void Postorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
int countNodes(treeNode *node)
{
    if(node==0)
        return 0;
    else
        return(countNodes(node->left)+countNodes(node->right)+1);
}
int main()
{
    treeNode *root = NULL,*temp;
    int ch;
    cout<<"Binary Tree Operations"<<endl;
    cout<<"\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n6.FindMin\n7.FindMax\n8.Search\n9.Count\n10.Exit\n";
    do
    {
        cout<<"\nEnter the Choice: \n"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert:";
            cin>>ch;
            root = Insert(root, ch);
            cout<<"\nElements in BST are:";
            Inorder(root);
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 2:
            cout<<"\nEnter element to be deleted:";
            cin>>ch;
            root = Delet(root,ch);
            cout<<"\nAfter deletion elements in BST are:";
            Inorder(root);
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 3:
            cout<<"\nInorder Travesals is:";
            Inorder(root);
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 4:
            cout<<"\nPreorder Traversals is:";
            Preorder(root);
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 5:
            cout<<"\nPostorder Traversals is:";
            Postorder(root);
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 6:
            temp = FindMin(root);
            cout<<"\nMinimum element is :"<<temp->data;
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 7:
            temp = FindMax(root);
            cout<<"\nMaximum element is :"<<temp->data;
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 8:
            cout<<"\nEnter element to be searched:";
            cin>>ch;
            temp = Find(root,ch);
            if(temp==NULL)
            {
                cout<<"Element is not found"<<endl;
            }
            else
            {
                cout<<"Element "<<temp->data<<" is Found\n";
            }
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 9:
            cout<<countNodes(root)<<endl;
            cout<<"\n----------------------------------------------"<<endl;
            break;
        case 10:
              exit(0);
            break;
        default:
            cout << "\nSelect Proper Option (1/2/3/4/5/6/7/8/9/10)" << endl;
            break;
        }
    }
    while(ch!=10);
    return 0;
}

