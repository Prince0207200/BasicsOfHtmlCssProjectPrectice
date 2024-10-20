#include<iostream>
#include<algorithm>
using namespace std;

void sorting01(int arr[],int n){

	int i=0;
	int j=n-1-i;
	int step=1;
	while(i<j){
		cout<<"The step "<<step<<endl;
		if (arr[i]>arr[j]){
			int t=arr[i];
			arr[i]=arr[j];           //error not solved
			arr[j]=t;
			i++;
			j--;
		}
		else if(arr[i]<arr[j]){
			i++;
		}else if(arr[i]==arr[j]){
			j--;
		}
		step++;
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
	
	sorting01(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
