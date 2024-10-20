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

double precisionDigit(int ans,int pre,int n){
	double factor=1;
	double sol=ans;
	
	for(int i=0;i<pre;i++){
		factor/=10;
		for(double j=ans;j*j<n;j+=factor){
			sol=j
		}
	}
}
int main(){
	int n;
	cout<<"Enter the num to find root\n";
	cin>>n;
	
	double ans=binarySearch(n);
	
		cout<<"Root is  "<<ans;
		precisionDigit(int ans,int pre,int n)
	
}
