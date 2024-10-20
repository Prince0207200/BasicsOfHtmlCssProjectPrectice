//#include<iostream>
//using namespace std;
//
//int main(){
//
//int a,b;
//cin>>a>>b;
//int ans=1;
//for (int i=0;i<b;i++){
//	ans=ans*a;
//}
//cout<<ans;
//}



//#include<iostream>
//using namespace std;
//void printfun(int p){
//	if(p==1){
//		cout<<"Even";
//	}
//	else{
//		cout<<"Odd";
//	}
//}
//
//int isEven(int i){
//	if(i&1==0||i==0){
//		printfun(1);
//		return 1;
//	}
//	printfun(0);
//	return 0;
//}
//
//
//int main(){
//
//int a,b,c;
//cout<<"Enter the num to check"<<endl;
//cin>>a;
//isEven(a);
//cin>>b;
//isEven(b);
//cin>>c;
//isEven(c);
//
//
//
//
//
//}


#include<iostream>
using namespace std;

int fact(int a){
	if (a==0||a==1){
		return 1;
	}
	int ans=a*fact(a-1);
	return ans;

}
int nCr(int n,int r){
	return fact(n)/(fact(n-r)*(fact(r)));
}
int main(){
	int n,r;
	cout<<"Enter n and r\n";
	cin>>n>>r;
	int s=nCr(n,r);
	cout<<"nCr= "<<s;
}
