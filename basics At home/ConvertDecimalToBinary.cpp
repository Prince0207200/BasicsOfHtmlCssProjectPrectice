//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//		int n,bit,ans=0,i=0;
//		cin>>n;
//		while(n!=0){								//decimal to binary
//			bit=(n&1);
//			ans=bit*pow(10,i)+ans;
//			n=n>>1;
//			i++;
//		}
//		cout<<ans;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//		int n,digit,ans=0,i=0;
//		cin>>n;
//		while(n!=0){
//			digit=(n%10);
//			if(digit==1){
//				ans=ans+pow(2,i);
//			}										// binary to decimal
//			n=n/10;
//			i++;
//		}
//		cout<<ans;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//		int n,digit,ans=0,i=0;
//		cin>>n;
//		while(n==0){
//			digit=(n%2);
//			ans=ans*10+digit;
//			n=n/2;
//			i++;
//		}
//		cout<<ans;
//}





#include<iostream>
#include<cmath>
using namespace std;
int main(){
		int n,k=0,bit,an=0,i=0;
		cin>>n;
		while(n!=0){								//decimal to binary
			bit=(n&1);
			an=bit*pow(10,i)+an;
			n=n>>1;
			i++;
		}
		//cout<<ans;
		while(an!=0){								//decimal to binary
			it=(n&0);
			ans=it*pow(10,k)+ans;
			n=n>>1;
			k++;
		}
		
		
		int digit,ans1=0,j=0;
		while(ans!=0){
			digit=(ans%10);
			if(digit==1){
				ans1=ans1+pow(2,j);
			}										// binary to decimal
			ans=ans/10;
			j++;
		}
		cout<<ans1;
}
