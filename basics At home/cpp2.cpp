//   
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int p;
//	cin>>p;
//	for(int i=1;i<=n;i++){
//		cout<<p<<" ";
//		p=p*4;
//	}
//}


  //all factor

//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int f=1;
//	for (int i=1;i<n;i++){
//		if(n%i==0){
//			cout<<i<<" ";
//			f=i;
//		}
//		
//	}
//	cout<<endl;
//	cout<<f;
//}



// #include<iostream>
// using namespace std;
// int main(){
// 	int a;
// 	cin>>a;
// 	for (int i=a/2;i>1;i--){
// 		if(a%i==0){
// 			cout<<a<<"is composite";
// 			break;
//		 }
//		else if(a%i!=0) {
//		 	cout<<a<<"prime";
//		 	break;
//		 }
//		
//		
//	 }
// 
//	
// }

 
 
 //multply all digit  without zero removing   
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int mul=1;
//	while(n>0){
//		
//	     	
//		 
//		mul=mul*(n%10);
//			n=n/10;
//		
//	}
//	cout<<mul;
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int n,ld;
//	cin>>n;
//	
//	while(n>0){
//		ld=n%10;
//		cout<<ld;
//		n=n/10;
//	}
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int n,ld;
//	cin>>n;
//	int rev;
//	rev=0;
//	while(n>0){
//		ld=n%10;
//		rev=rev*10+ld;
//		n=n/10;
//	}
//	cout<<rev;
//}










//#include<iostream>
//using namespace std;
//int main(){
//	int n,ld;
//	cin>>n;
//	int rev;
//	int sum;
//	sum=0;
//	rev=0;
//	while(n>0){
//		ld=n%10;
//		rev=rev*10+ld;
//		
//		sum+=ld;
//		n=n/10;
//	}
//	cout<<rev<<endl;
//	cout<<sum;
//}





//#include<iostream>
//using namespace std;
//int main(){
//	int n,fact;
//	cin>>n;
//	fact=1;
//	for(int i=n;i>0;i--){
//		fact=fact*i;
//		
//	}
//	cout<<fact;
//}





//#include<iostream>
//using namespace std;
//int main(){
//	int n,fact;
//	cin>>n;
//	fact=1;
//	for(int i=1;i<=n;i++){
//		fact=fact*i;
//		cout<<fact<<endl;
//		
//	}
//	
//}



#include<iostream>
using namespace std;
int main(){
	int i=65;
	while(i<=26+64){
		cout<<"the aschi value "<<char(i)<<" is "<<i<<" "<<endl;
		i++;
	}
}





