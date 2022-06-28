#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int d,count=0;
for(int i=0;i<n;i++){
   cin>>arr[n]; 
}
sort(arr,arr+n);

for(int i=0 ; i<n ; i++){
    d=arr[i+1]-arr[i];
    if( arr[i]==arr[0]+(i-1)*d){
        
        count++;
    }
    
   }

if(count==n-1){
 cout<<n/2<<endl;   
}
else if(d==0 && count!=n-1){
 cout<<0<<endl;
    
}
    else
    cout<<n*(n-1)/2<<endl;

}

return 0;
}