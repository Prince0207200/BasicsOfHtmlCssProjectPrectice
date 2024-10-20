#include<iostream>
using namespace std;

class GF{
	protected:
	int money;
	public:
		string color;
		int hand;
		void setMoney(int m){
			money=m;
		}
		void setHand(int h){
			hand=h;
		}
		void setColor(string){
			color="blue";
		}
};
class F:public GF{
	protected:
		int wife;
		public:
			int child;
			void setWife(int w){
			wife=w;
			}
			void setChild(int c){
			child=c;
			}
			
			
};
class C:public F{
	protected:
	int gf;
	public:
		void setgf(int g){
			gf=g;
		}
		void Display(){
			setgf(4);
			setWife(1);
			setChild(8);
			setHand(2);
			cout<<"The gf"<<gf<<" wife "<<wife<<" child "<<child<<" hand"<<hand;
		}
	
};
int main(){
	C boy;
	boy.Display();
}

