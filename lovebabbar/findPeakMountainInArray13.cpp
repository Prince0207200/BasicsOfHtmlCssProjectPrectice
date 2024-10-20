#include<iostream>
using namespace std;

int findPeakMountain(int arr[],int size){
	int s=0;
	int e=size-1;
	while(s<e){
		int mid=s+(e-s)/2;
		
		if(arr[mid]<arr[mid+1]){
			s=mid+1;
		}
		else if(arr[mid]>arr[mid+1]){
			e=mid;
		}
		
		
	}
	return s;
	
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
	int res=findPeakMountain(arr,size);
	if(res==-1){
		cout<<"Result not found";
	}
	else{
		cout<<"Peak mountain Found at index "<<res;
	}
}
