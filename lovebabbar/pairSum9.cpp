#include<iostream>
#include<algorithm>
using namespace std;

void pairSum(int arr[],int n,int s){
	sort(arr, arr+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==s){
				cout<<" "<<arr[i]<<" , "<<arr[j]<<endl;
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the size of array\n";
	cin>>n;
	
	cout<<"Enter the  array element \n";
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s;
	cout<<"Enter the s\n";
	cin>>s;
	pairSum(arr,n,s);
}
