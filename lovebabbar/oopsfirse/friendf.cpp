#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		void setData(int a1,int b1);
		friend Complex sumComplex(Complex o1,Complex o2);
		void display(){
			cout<<"The complex num is "<<a<<" + "<<b<<"i "<<endl;
		}
};

void Complex::setData(int a1,int b1){
			a=a1;
			b=b1;
}
Complex sumComplex(Complex o1,Complex o2){
	int x,y;
	
	Complex o3;
	o3.setData((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}		
	
int main(){
	Complex c1,c2,sum;
	c1.setData(2,4);
	c1.display();
	
	c2.setData(3,5);
	c2.display();
	
	sum=sumComplex(c1,c2);
	sum.display();
	
}

