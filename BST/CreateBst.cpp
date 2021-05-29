
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*left;
    node*right;
    node(){
        val=0;
        left=nullptr;
        right=nullptr;
    }
    node(int v){
        val=v;
        left=NULL;
        right=NULL;
    }
};

void insert(node*root,int v){
    node*tmp=new node(v);
    if(root==NULL){
     root=tmp;
    root->left=NULL;
    root->right=NULL;
    }else{
        node*ptr=root;
        while(ptr!=NULL){
            if(root->val == v){
                cout<<"\ninsertion not possible due to duplicacy\n";
                return;
            }
            else if(v<ptr->val && ptr->left==NULL){
                ptr->left=tmp;
                cout<<"\n"<<v<<"  value inserted at left side of "<<ptr->val<<"\n";
                break;
            }
            else if(v<ptr->val && ptr->left!=NULL){
                ptr=ptr->left;
            }
            else if(v>ptr->val && ptr->right == NULL){
                ptr->right=tmp;
                cout<<"\n"<<v<<" value inserted at the right of "<<ptr->val<<"\n";
                break;
            }
            else if(v>ptr->val && ptr->right != NULL){
                ptr=ptr->right;
            }
        }
    }
     
}
void disp(node*root){
    if(root==nullptr) return;
    cout<<" "<<root->val<<" ";
    disp(root->left);
    disp(root->right);
}
int main()
{
    node*root=new node(5);
    disp(root);
    insert(root,6);
    disp(root);
    insert(root,3);
    insert(root,4);
    insert(root,12);
    return 0;
}
