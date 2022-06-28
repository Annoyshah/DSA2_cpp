
#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node*next;

Node(int data){
    this->data=data;
    this->next=NULL;
}
};
void TakingInputs(){
  Node*head=NULL;
  int data;
  cin>>data;
  Node*newNOde=new Node(data);
  if(head==NULL){
    head=newNOde;
  }
  else{
    Node*temp=head;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=newNOde;


  }



   


}
void Print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"";
        head=head->next;
    }
}


int main(){
    void TakingInputs();
    

}