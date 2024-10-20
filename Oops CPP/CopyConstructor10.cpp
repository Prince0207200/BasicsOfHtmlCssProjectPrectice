#include<iostream>
using namespace std;

class Number{
	int a;
	
	public:
		Number(){
		a=0;
		}
		Number(int x);
		Number(Number &obj){
			cout<<"This is copy constructor called "<<endl;
			a=obj.a;
		}
		
		void display(void){
			cout<<"The num is "<<a<<endl;
		}
};

Number ::Number(int x){
	a=x;
}


int main(){
	Number n1,n2,n3(7);
	n1.display();
	n2.display();
	n3.display();
	Number n(n3);
	n.display();
	
	n3=n1;
	n3.display();
	Number m(n1);
	m.display();
}
