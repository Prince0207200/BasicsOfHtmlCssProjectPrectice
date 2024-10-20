//#include<iostream>
//using namespace std;
//
//class Base1{
//	int base1;
//	public:
//		Base1(int a){
//			base1=a;
//			cout<<"Base 1 is called"<<endl;
//		}
//		void printdata1(void){
//			cout<<"The value of data 1 is"<<base1<<endl;
//		}
//};
//class Base2{
//	int base2;
//	public:
//		Base2(int a){
//			base2=a;
//			cout<<"Base 2 is called"<<endl;
//		}
//		void printdata2(void){
//			cout<<"The value of data 2 is"<<base2<<endl;
//		}
//};
//
//class Derived:public Base1,public Base2{
//	int Derived1,Derived2;
//	public:
//	
//	Derived(int a,int b,int c,int d):Base1(a),Base2(b){
//		Derived1=c;
//		Derived2=d;
//	}
//	void printdata(void){
//			cout<<"The value of derived1 is "<<Derived1<<endl;
//			cout<<"The value of derived2 is "<<Derived2<<endl;
//		}
//};
//
//int main(){
//	Derived D(4,5,6,7);
//	D.printdata1();
//	D.printdata2();
//	D.printdata();
//
//	
//}




//#include<iostream>
//using namespace std;
//
//class Base1{
//	int base1;
//	public:
//		Base1(int a){
//			base1=a;
//			cout<<"Base 1 is called"<<endl;
//		}
//		void printdata1(void){
//			cout<<"The value of data 1 is"<<base1<<endl;
//		}
//};
//class Base2{
//	int base2;
//	public:
//		Base2(int a){
//			base2=a;
//			cout<<"Base 2 is called"<<endl;
//		}
//		void printdata2(void){
//			cout<<"The value of data 2 is"<<base2<<endl;
//		}
//};
//
//class Derived:public Base1,virtual public Base2{
//	int Derived1,Derived2;
//	public:
//	
//	Derived(int a,int b,int c,int d):Base1(a),Base2(b){
//		Derived1=c;
//		Derived2=d;
//	}
//	void printdata(void){
//			cout<<"The value of derived1 is "<<Derived1<<endl;
//			cout<<"The value of derived2 is "<<Derived2<<endl;
//		}
//};
//
//int main(){
//	Derived D(4,5,6,7);
//	D.printdata1();
//	D.printdata2();
//	D.printdata();
//
//	
//}




#include<iostream>
using namespace std;

class Base1{
	int base1;
	public:
		Base1(int a){
			base1=a;
			cout<<"Base 1 is called"<<endl;
		}
		void printdata1(void){
			cout<<"The value of data 1 is"<<base1<<endl;
		}
};
class Base2{
	int base2;
	public:
		Base2(int a){
			base2=a;
			cout<<"Base 2 is called"<<endl;
		}
		void printdata2(void){
			cout<<"The value of data 2 is"<<base2<<endl;
		}
};

class Derived:virtual public Base1,virtual public Base2{
	int Derived1,Derived2;
	public:
	
	Derived(int a,int b,int c,int d):Base1(a),Base2(b){
		Derived1=c;
		Derived2=d;
	}
	void printdata(void){
			cout<<"The value of derived1 is "<<Derived1<<endl;
			cout<<"The value of derived2 is "<<Derived2<<endl;
		}
};

int main(){
	Derived D(4,5,6,7);
	D.printdata1();
	D.printdata2();
	D.printdata();

	
}
