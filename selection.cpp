// C++ program for implementation of
// selection sort
#include <bits/stdc++.h>
using namespace std;




int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1; j<n ; j++){
        if(arr[j]>arr[i]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
	
	cout << "Sorted array: \n";
     for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"This program is written by Amay shah 21U03026";
	return 0;
}
    
