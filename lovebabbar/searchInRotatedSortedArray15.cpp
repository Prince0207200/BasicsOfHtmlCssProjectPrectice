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



int binarySearch(int arr[],int s,int e,int Key){
	
	
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

int findPositionInRotatedArray(int arr[],int n,int Key){
	int pivot=findPiotInArray(arr,n);
	if(Key>=arr[pivot] && Key<=arr[n-1]){
		return binarySearch(arr, pivot, n-1,Key);
	}
	else{
		return binarySearch(arr, 0, pivot-1,Key);
	}
	
}

int main(){
	int n,Key;
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter the  key to search \n";
	cin>>Key;
	cout<<"Enter the  array element \n";
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int res=findPositionInRotatedArray(arr,n,Key);
	if(res==-1){
		cout<<"Result not found";
	}
	else{
		cout<<"Found at index "<<res;
	}
}
