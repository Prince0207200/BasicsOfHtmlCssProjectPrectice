//	#include<iostream>
//	using namespace std;
//	class Employee{
//		int id;
//		int salary;
//		
//		public: 
//			void setId(void){
//				salary=22;
//				cout<<"Enter the id of employee "<<endl;
//				cin>>id;
//			}
//			void getId(void){
//				cout<<"the id of this employee is "<<id<<endl;
//			}
//			
//	};
//	
//	int main(){
//	//	Employee ram,karan,nan,bde;
//	//	ram.setId();                        //less no of employee we can access like this but more??
//	//	ram.getId();
//	//	karan.setId();
//	//	karan.getId();
//	//	nan.setId();
//	//	nan.getId();
//	//	bde.setId();
//	//	bde.getId();
//	
//		Employee fb[4];
//	//	fb[0].getId();
//	//	fb[0].setId();
//	//	fb[1].getId();     //to avoid many repetaion call use loop
//	//	fb[1].setId();
//	//	fb[2].getId();
//	//	fb[2].setId();
//	//	fb[3].getId();
//	//	fb[3].setId();
//	
//		for(int i=0;i<4;i++){
//			fb[i].setId();
//			fb[i].getId();
//		}
//	}

#include<iostream>
using namespace std;

class Complex{
	int a;
	int b;
	
	public:
		void setData(int v1,int v2){
			a=v1;
			b=v2;
		}
		void setDataSum(Complex a1 , Complex a2){
			a=a1.a+a2.a;
			b=a1.b+a2.b;
		}
		void printNum(){
			cout<<"Your complex num is "<<a<<"+"<<b<<"i"<<endl;
		}
};
int main(){
		Complex c1,c2,c3;
		
		c1.setData(1,2);
		c1.printNum();
		
		c2.setData(3,4);
		c2.printNum();
		
		c3.setDataSum(c1,c2);
		c3.printNum();
}





