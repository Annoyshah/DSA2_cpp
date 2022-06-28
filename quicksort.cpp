#include<iostream>
using namespace std;
void swap(int arr[], int a,int b){
int temp=a;
a=b;
b=temp;
}

int partition(int arr[] , int l , int h){
   int   i=l;
   int  j=h;
  int pivot=arr[l];
if(i<j){
      if(arr[i]<=pivot){
    i++;
  }
   if(arr[j]>=pivot){
    j--;

}
 swap(arr,i,j);
}
else
swap(arr,l,j);
return j;
}

int Quicksort(int arr[],int l , int h){
if(l<h){
    int pivot=partition(arr,l,h);
Quicksort(arr,l,pivot-1);
Quicksort(arr,pivot+1,h);
}


}
void printArray(int arr[], int size)
{
	int i;
	for (i = 1; i < size+1; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0 ; i<n ; i++){
  cin>>arr[n];
 }
	Quicksort(arr, 1, n );
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

