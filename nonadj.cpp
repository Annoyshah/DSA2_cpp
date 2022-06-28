#include<iostream>

using namespace std;


int main(){
int t;
cin>>t;
while(t--){
    int n;
    int c_one=0;
    int c_zero=0;
    int swap=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    while(c_one!=0&&c_zero!=n){
        int *ptr=arr;
    for(ptr=arr;ptr!=&arr[n];ptr+2){
    if(*ptr=1){
        *ptr=0;
    }
    else
        *ptr=1;
    
    }
swap++;
    }

cout<<swap/2<<endl;


}

}