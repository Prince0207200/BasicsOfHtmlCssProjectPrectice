#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int Key){
	for(int i=0;i<size;i++){
		if(arr[i]==Key){
			return i;
		}
		
		
	}
	return 0;
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
	int res=linearSearch(arr,size,Key);
	if(res==0){
		cout<<"Result not found";
	}
	else{
		cout<<"Found at index "<<res;
	}
}
