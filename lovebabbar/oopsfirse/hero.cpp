#include<iostream>
using namespace std;
//class A{
//	public:
//	int a;
//	int b;
//	void operator- (A &obj){
//		int value1=this->a;
//		int value2=obj.a;
//		cout<<value1+value2;
//	}
//};
//
//
//int main(){
//	A obj1,obj2;
//	obj1.a=4;
//	obj2.a=6;
//	obj1-obj2;
//}




class A{
	public:
	int a;
	int b;
	void operator++ (){
		cout<<"main brahm hu"<<this->a;
	}
};


int main(){
	A obj1,obj2;
	obj1.a=4;
	obj2.a=6;
	obj1++;
	//obj2*;
}
