#include<iostream>
using namespace std;

void uniqElement(int arr[],int size){
	int res=0;
	for(int i=0;i<size;i++){
		res=res^arr[i];                   //it will find unique element but if other num is repeted 2 times like size=7  always odd
												// and arr=1 2 3 2 4 1 4 8 8           ans=3
		
	}
	cout<<res;
		
	
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
	uniqElement(arr,size);
	
	
	
	
	
}
