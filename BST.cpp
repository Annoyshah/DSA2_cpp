//SEarching normally in trees causes time complexity to be O(n)
//but searching through binary searching causes tc to be O(log n)
//for every node n evrything in left subtree is less than n's data and evrything in right shouls br greater than n's data
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
int maximum(node* root) {
    if(root==NULL){
        return INT_MAX;
    }
    max(root->data, max(maximum(root->left),maximum(root->right)));

}
int minimum(node* root) {
    if(root==NULL){
        return INT_MAX;
    }
    min(root->data, min(minimum(root->left),minimum(root->right)));

}
bool isBST(node* root){
    if(root==NULL){
        return true;

    }
   int  leftmax = maximum(root->left);
   int rightmax = minimum(root->right);
   bool option=(root->data>leftmax)&&(root->data<=rightmax)&& isBST(root->left) && isBST(root->right);
   return option;
}

 bool isBST3(node* root , int maximum=INT_MAX, int minimum=INT_MAX){
    if(root==NULL){
        return true;

    }
    if(root->data>maximum || root->data<minimum){
        return false;

    }
    bool isLEFTok=isBST3(root->left , root->data-1 , minimum);
    bool isRIGHTok=isBST3(root->right , maximum , root->data);

return isLEFTok && isRIGHTok;

}