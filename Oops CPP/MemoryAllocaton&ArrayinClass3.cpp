#include<iostream>
using namespace std;
class Shop{
	int itemId[100];
	int itemPrice[100];
	int counter;
	public:
		void initCounter(void){
			counter=0;
		}
		
		void setPrice(void);
		void displayPrice(void);
	
};
void Shop::setPrice(void){
	cout<<"Enter id of your item no "<<counter+1<<endl;
	cin>>itemId[counter];
	cout<<"Enter Price of your item no "<<counter+1<<endl;
	cin>>itemPrice[counter];
	counter++;
}
void Shop::displayPrice(void){
	for(int i=0;i<counter;i++){
		cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}



int main(){
	Shop dukaan;
	dukaan.initCounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.displayPrice();
}
