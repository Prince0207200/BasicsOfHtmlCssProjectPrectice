//#include<iostream>
//using namespace std;
//
//class Complex{
//	int a;
//	int b;
//	                                             //default constructor    takes no argument
//	
//	public:
//	 Complex(void){
//		a=2;
//		b=7;
//	}
//	 
//	 void printfun(void){
//	 	cout<<"The complex  num is "<<a<<" + "<<b<<"i"<<endl;
//	 }
//};
//
//
//
//
//int main(){
//	Complex c1;
//	c1.printfun();
//}











//#include<iostream>
//using namespace std;
//                                //Parametrised constructor takes argument
//class Complex{
//	int a;
//	int b;
//	
//	
//	public:
//	 Complex(int ,int);
//	 
//	 void printfun(void){
//	 	cout<<"The complex  num is "<<a<<" + "<<b<<"i"<<endl;
//	 }
//};
//
// Complex::Complex(int x ,int y){
//		a=x;
//		b=y;
//	}
//int main(){
//	//implicit call
//	Complex c1(3,7);
//	c1.printfun();
//	
//	//explicit call
//	Complex c2=Complex(6,8);
//	c1.printfun();
//	c2.printfun();
//	
//}





#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
	public:
		Point(int ,int );
		
		void printfun(void){
			cout<<"The point is ("<<x<<" , "<<y<<" )"<<endl;
			
		}
};

 Point :: Point(int a,int b){
	x=a;
	y=b;
}


int main(){
	Point p1(34,67),p2(3,9);
	p1.printfun();
	p2.printfun();
}



