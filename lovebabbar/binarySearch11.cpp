#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int Key){
	int s=0;
	int e=size-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]==Key){
			return mid;
		}
		else if(arr[mid]<Key){
			s=mid+1;
		}
		else if(arr[mid]>Key){
			e=mid-1;
		}
		
		
	}
	return -1;
}
int main(){
	int size,Key;
	cout<<"Enter the size of array\n";
	cin>>size;
	cout<<"Enter the  key to search \n";
	cin>>Key;
	cout<<"Enter the  array element \n";
	int arr[1000];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int res=binarySearch(arr,size,Key);
	if(res==-1){
		cout<<"Result not found";
	}
	else{
		cout<<"Found at index "<<res;
	}
}
