#include<iostream>
using namespace std;

void swapAlternateArray(int arr[],int size){
	
	
	for(int i=0;i<size-1;i++){
		if(i%2==0){
			swap(arr[i], arr[i+1]);
		}
	}


//	for(int i=0;i<size-1;i+=2){
//		
//		swap(arr[i], arr[i+1]);
//		
//		
//	}
		
	
}
int main(){
	int size;
	cout<<"Enter the size of array\n";
	cin>>size;
	
	cout<<"Enter the  array element \n";
	int arr[1000];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	swapAlternateArray(arr,size);
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
}
