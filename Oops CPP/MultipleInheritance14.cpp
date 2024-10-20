//#include<iostream>
//using namespace std;
//
//class Base1{
//	protected:
//		int  base_1_int;
//	public:
//		int play_1;
//		
//		void setbase1(int x,int y){
//			base_1_int=x;
//			play_1=y;
//		}
//};
//class Base2{
//	protected:
//		int  base_2_int;
//	public:
//		int play_2;
//		
//		void setbase2(int x,int y){
//			base_2_int=x;
//			play_2=y;
//		}
//};
//class Derive:protected Base1,public Base2{
//	public:
//		void show(){
//			setbase1(7,2);
//			
//			cout<<"The vaue of base_1_int is "<<base_1_int<<" , base_2_int is "<<base_2_int<<endl;
//			cout<<"The value of play_1 is "<<play_1<<" and play_2 is "<<play_2<<endl;
//		}
//};
//int main(){
//	Derive d;
//	d.setbase2(9,1);
//	d.show();
//
//	
//}



#include<iostream>
using namespace std;

class Base1{
	protected:
		int  base_1_int;
	public:
		int play_1;
		
		void setbase1(int x,int y){
			base_1_int=x;
			play_1=y;
		}
};
class Base2{
	protected:
		int  base_2_int;
	public:
		int play_2;
		
		void setbase2(int x,int y){
			base_2_int=x;
			play_2=y;
		}
};
class Derive:public Base1,public Base2{
	public:
		void show(){
			
			
			cout<<"The vaue of base_1_int is "<<base_1_int<<" , base_2_int is "<<base_2_int<<endl;
			cout<<"The value of play_1 is "<<play_1<<" and play_2 is "<<play_2<<endl;
		}
};
int main(){
	Derive d;
	d.setbase1(7,2);
	d.setbase2(9,1);
	d.show();

	
}
