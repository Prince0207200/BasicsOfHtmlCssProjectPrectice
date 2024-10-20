//recursion
//#include<iostream>
//using namespace std;
//
//void print(int p){
//	if(p<=-5) return ;
//	cout<<"hey"<<p<<endl;
//	print(p-2);
//}
//
//
//int main(){
//	int n;
//	cin>>n;
//	print(n);
//}


// ///print 1 to n with extra perimeter
//#include<iostream>
//using namespace std;
//
//void print(int p,int x){
//	if(p>x) return ;
//	cout<<"hey"<<p<<endl;
//	print(p+1,x);
//}
//
//
//int main(){
//	int x;
//	cin>>x;
//	print(1,x);
//}


///print 1 to n without extra perimeter
#include<iostream>
using namespace std;

void print(int n){
	if(n==0) return  ;
	cout<<n<<endl;
	print(n-1);
}
int sum(int n){
	if(n==1) return 1;
	return n+sum(n-1);
}
int fact(int n){
	if(n==0 || n==1) return 1;
	return n*fact(n-1);
}
//int pow(int a,int n){
//	if(n==0)return 1;
//	return a*pow(a,n-1);
//}


int pow(int a,int n){
	if(n==0)return 1;
	if (n==1)return 2;
	if(n%2==0){
	return pow(a,n/2)*pow(a,n/2);
	}
	if(n%2!=0){
	return pow(a,n/2)*pow(a,(n+1)/2);
	}
}


int fibo(int n){
	if(n==0) return 0;
	if (n==1 ||n==2) return 1;
	return fibo(n-1)+fibo(n-2);
}

int main(){
	int n,a;
	cout<<"enter value of n";
	cin>>n;
	cout<<"entre value of a";
	cin>>a;
//	print(n);
//	cout<<fact(n)<<endl;
//	cout<<sum(n)<<endl;
	cout<<pow(a,n)<<endl;
//	cout<<fibo(n);
	
}


