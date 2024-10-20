#include<iostream>
using namespace std;

long long int binarySearch(int n){
	int s=0;
	int e=n;
	long long int ans;
	while(s<=e){
		long long int mid=s+(e-s)/2;
		if(mid*mid==n){
			return mid;
		}
		else if(mid*mid<n){
			ans=mid;
			s=mid+1;
		}
		else if(mid*mid>n){
			e=mid-1;
		}
		
		
	}
	return ans;
}
int main(){
	int n;
	cout<<"Enter the num to find root\n";
	cin>>n;
	
	int res=binarySearch(n);
	
		cout<<"Root is  "<<res;
	
}
