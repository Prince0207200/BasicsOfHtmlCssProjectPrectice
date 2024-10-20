#include<iostream>
using namespace std;
class Employee{
	private:
		int a,b,c;
	public:
		int d,e;
		void setData(int a1,int b1,int c1){
				a=a1;
				b=b1;
				c=c1;
		}
		void getData(){
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
			cout<<"The value of c is "<<c<<endl;
			cout<<"The value of d is "<<d<<endl;
			cout<<"The value of e is "<<e<<endl;
		}
};
//void Employee ::setData(int a1,int b1,int c1){

int main(){
	Employee p;
//	p.a=132;
//	p.b=122;            //it will throw error because it is private
	p.d=56;
	p.e=43;
	p.setData(1,2,3);
	p.getData();
	
	
	return 0;
}
