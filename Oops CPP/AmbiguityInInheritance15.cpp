#include<iostream>
using namespace std;
class Base1{
	public:
		void greet(){
			cout<<"Hello base1"<<endl;
		}
};
class Base2{
	public:
		void greet(){
			cout<<"Nameste base2"<<endl;
		}
};
class Derived:public Base1, public Base2{
	public:
	void show(){
	cout<<"Which is called"<<endl;
}
	void greet(void){
		Base2 :: greet();
	}

};
class B{
	public:
		void say(){
			cout<<"Namaskaar "<<endl;
		}
		
};
class D: public B{
//	public:
//		void say(){
//			cout<<"sdfghjk";
//		}
};
int main(){
	// //   Ambiguity1
//		Base1 b1;
//		b1.greet();
//		Base2 b2;
//		b2.greet();
//		Derived d;
//		d.show();
//		d.greet();

	 // // Ambiguity2
	 B b;
	 b.say();
	 D d;
	 d.say();
	 
	 
}
