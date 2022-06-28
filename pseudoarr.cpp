
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n , count=0;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	
	    for(int i=0;i<=n-1;i++){
	        if(arr[i+1]<arr[i]){
	            int temp=arr[i];
	            arr[i]=arr[i+1];
	            arr[i+1]=temp;
	            count++;
                }
                else 
            continue;
	        
            
	    }
	    if(count>1)cout<<"NO"<<endl;
	
	else
	cout<<"YES"<<endl;
	}
	return 0;
}