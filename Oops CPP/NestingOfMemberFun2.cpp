 #include<iostream>
 #include<string>
using namespace std;
class binary{
	private:
		string s;
		void chk_bin(void);
	public:
		void read(void);
		void ones_complement(void);
		void display(void);
		
};
void binary :: read(void){
	cout<<"enter a binary number"<<endl;
	cin>>s;
}
void binary :: chk_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"incorrect binary format"<<endl;
			exit(0);
		}
	}
	cout<<"it is binary:";
}

void binary :: ones_complement(void){
	chk_bin();
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else if(s.at(i)=='1'){
			s.at(i)='0';
		}
	}
}

void binary :: display(void){
	cout<<"displaying your binary num"<<endl;
//	ones_complement();
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
}

int main(){
	binary b;
	b.read();
	//b.chk_bin();                    
	b.ones_complement();
	b.display();
}
