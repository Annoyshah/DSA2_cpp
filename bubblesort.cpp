#include<iostream>
using namespace std;
class Bsort{
    public:
    void insert();
void Bubble(int arr[] , int size);
void display();
int arr[50];
int size;
int temp;
    
    
    
};

void Bsort::insert() {
    cout<<"Enter array size"<<endl;
    cin>>size;
    cout<<"enter elements of unsorted array";
    for( int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    
void Bsort::Bubble(int arr[] , int size){
    
    int counter=0;
    while(counter<size){
        for( int i=0;i<size-counter;i++){

    if(arr[i]>arr[i+1]){
       int temp = arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
 }
   }
 counter++;
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}

void Bsort::display(){
    Bubble(arr,size);
    cout<<"Sorted array"<<endl;
    for(int j=0 ; j<size ; j++){
        cout<<arr[j]<<endl;
    }
    }
    
 int main(){
     Bsort hehe;
     hehe.insert();
     return 0;
 }   
