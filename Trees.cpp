#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* left;
node* right;

node(int data) {
this->data = data;
this->left =NULL;
this->right =NULL;
}
};
node* buildTree(node* root ){

cout<<"Enter the data of root node"<<endl;
int data;
cin>>data;
root=new node(data);

if(data==-1)
{
    return NULL;
}
cout<<"Enter data inserting in left of"<<data<<endl;
root->left=buildTree(root->left);

cout<<"Enter data inserting in right of"<<data<<endl;
root->right=buildTree(root->right);
return root;


}

void PrintTree(node* root){
    //base case
    if(root==NULL)
{
    return;
}
if(root->left!=NULL){

    cout<<"l"<<root->left->data<<endl;
}
if(root->right!=NULL){
    cout<<"r"<<root->right->data<<endl;
}
PrintTree(root->left);
PrintTree(root->right);

}

node* TakeInput(node* root){
    int rootdata;
    cin>>rootdata;
    if(rootdata=-1){
        return ;

    }
    node*leftchild=TakeInput();
    node*righthcild=TakeInput();
    root->left=leftchild;
    root->right=righthcild;
    return root;


}
node* TakeInputLevelwise(){
    int rootdata;
    cin>>rootdata;
    if(rootdata=-1){
        return;

    }
    node*root= new node(rootdata);
        queue <node*> pendingnodes;
    while(pendingnodes.size()!=0){
      node*front=pendingnodes.front();
  
      pendingnodes.pop();

    }
cout<<"Enter leftchild of "<<endl;

}
int numnodes(node* root){
if(root==NULL){
    return 0;

}
int ans= 1+numnodes(root->left)+numnodes(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return;
  }
    preorder(root->left);
    cout<<root->data<<endl;
       preorder(root->right);
    cout<<root->data<<endl;

}
// void height(node* root){
// if(root==NULL){
//     return 0;
// }
// return max(height(root->left),height(root->right));
// }

// int diameter(node* root){
//     if(root==NULL){
//         return 0;

//     }
//     int op1=height(root->left)+height(root->right);
//     int op2=diameter(root->left);
//     int op2=diameter(root->right);
//     return max(op1,max(op2,op3));
// }

int main(){
    node*root=NULL;
    //creating a tree
    cout<<"calling build tree";
    node* buildTree(root);
    return 0;
}

