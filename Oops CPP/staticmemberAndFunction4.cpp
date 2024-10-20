#include<iostream>
using namespace std;

class Employee{
	int salary;
	int id;
	static int count;   //static ko class ke bahar bhi initilise krna pdta hai
											//aur static krne se sare obj count ko share krte hai
	
	public:
		void setId(void){
			cout<<"Enter id "<<endl;
			cin>>id;
			count++;
		}
		void getId(void){
			cout<<"employee id is "<<id<<"and this is employe no "<<count<<endl;
		}
		static void getCount(void){//staticfun ko sirf dusre static fun ya variables ka hi access hota hai 
			//cout<<id; //shows error
			cout<<"The value of count is "<<count<<endl;
		}
};
int Employee :: count=100;//jb bhi static variable bnate hain to by default 0 se initilise hojata hai
int main(){
	Employee ram,dev,karan;
	Employee::getCount();
	ram.setId();
	ram.getId();
	Employee::getCount();       //bina obj ke refrence ke run kia direct fun ko call kia class ke saath
	karan.setId();
	karan.getId();
	Employee::getCount();
	dev.setId();
	dev.getId();
}
