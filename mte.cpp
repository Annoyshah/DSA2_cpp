#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cin>>n;

int a[n];
for( int i=0;i<n;i++){

cin>>a[i];
if(a[i]%2==0){
even++;
}
else 
odd++;
}
if(odd==n||even==n){
    cout<<0<<endl;
}

if(odd%2==0&&even<odd){
    cout<<even;
    }
else if(odd%2==0 && odd<even)
cout<<odd/2;
else if(even%2==0 && even>odd)
cout<<odd/2;
else
cout<<even;

}