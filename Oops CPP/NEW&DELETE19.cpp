#include<iostream>
using namespace std;

int main(){
	int a=7;
	int* ptr= &a;
	cout<<*ptr<<endl;
	
	int* f=new int[4];
		f[0]=8;
		f[1]=9;
		*(f+3)=4;
	//	delete[]f;
		cout<<f[0]<<endl;
		cout<<f[1]<<endl;
		cout<<f[2]<<endl;
		cout<<f[3]<<endl;
}
