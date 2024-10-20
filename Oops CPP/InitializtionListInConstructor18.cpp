#include<iostream>
using namespace std;

class Ajeet{
	int a;
	int b;
	public:
//		Ajeet(int i,int j):a(i),b(j)
//		Ajeet(int i,int j):a(i),b(j+i)
//		Ajeet(int i,int j):a(i),b(2*j)
//		Ajeet(int i,int j):a(i),b(a+j)
//		Ajeet(int i,int j):a(b+i),b(j)
//		Ajeet(int i,int j):a(a+i),b(j+i)

//		Ajeet(int i,int j):b(j),a(i)
//		Ajeet(int i,int j):b(j),a(i+b)
		Ajeet(int i,int j):b(j),a(b+i)
		{
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
		}
};
int main(){
	Ajeet obj(5,20);
}
