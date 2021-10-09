#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* root=NULL;
node* getnew(int data)
{
    node* temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
node* insert(node* root,int data)
{
    if(root==NULL)
    {
        root=getnew(data);
    
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;

}
int findheight(node* root)
{
    if(root==NULL)
    {
      return -1;
    }
    int left=findheight(root->left);
    int right=findheight(root->right);
    return max(left,right)+1;
}
int main()
{
    node* root=NULL;
    cout<<"enter the range\n:";
    int range,data;
    cin>>range;
    for(int i=1;i<=range;i++)
    {
        cout<<"enter the "<<i<<" elements of the tree\n:";
        cin>>data;
       root=insert(root,data);
        
    }
     int height=findheight(root);
    cout<<"height of the tree is=\n"<<height;
return 0;
}
