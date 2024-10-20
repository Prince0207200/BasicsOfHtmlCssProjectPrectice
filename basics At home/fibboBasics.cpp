#include<iostream>
using namespace std;

//int main(){
//	int a=0;
//	int b=1;
//	int nextnum,n=10;
//	
//	cout<<a<<" "<<b<<" ";
//	for(int i=0;i<n;i++){
//		nextnum=a+b;
//		a=b;
//		b=nextnum;
//		cout<<nextnum<<" ";
//	}
//}




int main(){
	int n;
	cout<<"Enter num: ";
	cin>>n;
	bool isPrime=1;
	if(n==1){
		cout<<"neither prime nor composite";
		
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			isPrime=0;
			break;
		}
	}
	if(isPrime==0){
		cout<<"not ";
	}else{
		cout<<"prime";
	}
}
