#include<iostream>
using namespace std;

void findDuplicate(int arr[],int size){
	
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];                  //input should be 1 to n-1 Example size=6 then 1,2,3,4,5 shold present in any order & other 1 
		                           //       repeated element will be anything betw 1 to 5
		cout<<ans<<" ";
	}
	

cout<<"\nIn second loop\n";
	for(int i=0;i<size;i++){
		ans=ans^i;
		cout<<ans<<" ";
		
	}
	cout<<"\n"<<ans;
		
	
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
	findDuplicate(arr,size);
	
	
	
	
	
}
