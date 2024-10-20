//
//#include<iostream>
//using namespace std;
//                                
//class Complex{
//	int a;
//	int b;
//	
//	
//	public:
//	 Complex(){
//		a=0;
//		b=0;
//	}
//	 Complex(int ,int);
//	 Complex(int );
//	 
//	 void printfun(void){
//	 	cout<<"The complex  num is "<<a<<" + "<<b<<"i"<<endl;
//	 }
//};
//
//
// Complex::Complex(int x ,int y){
//		a=x;
//		b=y;
//	}
//Complex::Complex(int x){
//	a=x;
//	b=0;
//}
//int main(){
//	//implicit call
//	Complex c1(3,7);
//	c1.printfun();
//	Complex c2(8);
//	c2.printfun();
//	
//	Complex c3=Complex();
//	c3.printfun();
//}




#include<iostream>
using namespace std;


class Simple{
	int data1;
	int data2;
	int data3;
	
	public:
		Simple(int a=2,int b=9,int c=3){
			data1=a;
			data2=b;
			data3=c;
		}
		
		void printfun(void){
			cout<<"The value of data1 ,data2 and data3 is "<<data1<<", "<<data2<<"and "<<data3<<"respectively"<<endl;
		}
};

int main(){
	Simple s1=Simple(5);
	s1.printfun();
	Simple s2=Simple(5,7);
	s2.printfun();
	Simple s3=Simple(5,7,1);
	s3.printfun();
	Simple s4=Simple();
	s4.printfun();
}
