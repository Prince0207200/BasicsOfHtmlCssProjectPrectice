#include<iostream>
using namespace std;

int findPiotInArray(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else{
			e=mid;
		}
	}
	return s;
}

int main(){
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int arr[1000];
	cout<<"Enter array element"<<endl;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int p=findPiotInArray(arr,n);
	cout<<"Piot Element at index "<<p<<" and element is "<<arr[p];
}
