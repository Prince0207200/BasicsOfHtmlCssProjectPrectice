#include<iostream>
//using namespace std;
//class ram{
//	private:
//	int health;
//	public:
//	char level;
//	void print(){
//		cout<<"l"<<level;
//	}
//	int gethealth(){
//		return health;
//	}
//	int sethealth(int h){
//		health=h;
//	}
//};
//int main(){
////	ram h1;
////	h1.sethealth(45);
////	h1.level='A';
////	cout<<h1.gethealth()<<endl;
////	cout<<h1.level<<endl;
//
//	ram a;
//	cout<<a->gethealth();
//}


using namespace std;
class Hero{
	private:
		int health;
	public:
		char level;
		
	Hero (){
		cout<<"simple construuctor"<<endl;
	}
		
	int gethealth(){
		return health;
	}
	int sethealth(int h){
		health=h;
	}
	char getlevel(){
		return level;
	}
	int setlevel(char ch){
		level=ch;
	}
		void print(){
		cout<<"l"<<level;
	}
	
	
		

};
int main(){
	
	Hero suresh;
	suresh.sethealth(70);
	suresh.setlevel('C');
}
