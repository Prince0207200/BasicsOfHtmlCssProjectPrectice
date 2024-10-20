#include<iostream>
using namespace std;

void intersection(int arr[],int arr1[],int size,int size1){
	int count=0;
	cout<<"Repeated element are";
	for(int i=0;i<size;i++){
		for(int j=0;j<size1;j++){
			if(arr[i]==arr1[j]){
				cout<<arr[i]<<" ";
				count++;
				arr1[j]=INT_MAX;
				break;
			}
		
		}	
	}
	if(count==0){
		cout<<"Not found";
	}
		
	
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
	int size1;
	cout<<"Enter the size of array1\n";
	cin>>size1;
	cout<<"Enter the  array1 element \n";
	int arr1[1000];
	for(int i=0;i<size1;i++){
		cin>>arr1[i];
	}
	intersection(arr,arr1,size,size1);
	
	
}
