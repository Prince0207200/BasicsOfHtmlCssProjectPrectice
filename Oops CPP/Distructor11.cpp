#include<iostream>
using namespace std;
int count=0;
class Num{
	public:
		Num(){
			count++;
			cout<<"When constructor is called "<<count<<endl;
		}
		~Num(){
			cout<<"When distructor is called "<<count<<endl;
			count--;
		}
};
int main(){
	
	cout<<"in main"<<endl;
	cout<<"calling in obj n1"<<endl;
	Num n1;
	{
		cout<<"We are in n1 "<<endl;
		cout<<"Calling n2 n3 here"<<endl;
		Num n2,n3;
		cout<<"After calling n2 n3 we are exiting n1"<<endl;
	}
	cout<<"we are out ";
	
}
