
#include <bits/stdc++.h>
using namespace std;
struct bstNode
{
    int value;
    bstNode* left;
    bstNode* right;
};
bstNode* createBSTNode(int value,bstNode* left,bstNode* right)
{
    bstNode* root = new bstNode();
    root->value=value;
    root->left=left;
    root->right=right;
    return root;
}
bstNode* insertAtTree(bstNode* root,int value)
{
    if(root==NULL)
        return createBSTNode(value,NULL,NULL);
    if(value<root->value)
        root->left=insertAtTree(root->left,value);
    else
        root->right=insertAtTree(root->right,value);
    return root;
}
bstNode* Delete(bstNode* root,int value)
{
    if(root==NULL)
        return root;
    else if(value<root->value)
       root->left = Delete(root->left,value);
    else if(value>root->value)
        root-> right = Delete(root->right,value);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->left==NULL)
        {
            bstNode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            bstNode* temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            int mn = 0;
            bstNode* temp;

            temp->value = mn;
            root->value = temp->value;
            root->right = Delete(root->right,temp->value);
        }
    }
    return root;
}
int main()
{
    int p;
    bstNode* f;
    bstNode* head;
    int a,o;
    while(p)
    {

        cout<< "Input your choice : "<<endl;
        cout<< "1 : INSERT ELEMENT IN THE BST"<<endl;
        cout<< "2 : DELETE ELEMEENT FROM THE BST"<<endl;
        cout<< "3 : DISPLAY ELEMENTS OF THE BST"<<endl;
        cout<< "4 : QUIT"<<endl;
        cin>> p;
        switch(p)
        {
            case 1:
                cout<< "Input a value : ";
                cin>>a;
                head = insertAtTree(head,a);
                break;
            case 2:
                cout<< "Insert the value to delete : ";
                cin>>a;
                Delete(head,a);
                cout<<a <<" is deleted from the tree"<<endl;
                break;
            case 3:
                break;
            case 4:
                p=0;
        }
    }
    return 0;
}



