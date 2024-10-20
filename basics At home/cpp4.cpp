//#include<iostream>
//using namespace std;
//
//void greet(){
//	cout<<"Good Morning"<<endl;
//	cout<<"How are You?"<<endl;
//}
//int main(){
//	greet();
//	cout<<" sdfghjk "<<endl;
//	greet();
//}




//#include<iostream>
//using namespace std;
//
//int sum(int a,int b){
//	return  a+b;
//}
//int main(){
//	int a;
//	cout<<"Enter 1st number : ";
//	cin>>a;
//	int b;
//	cout<<"Enter 2nd number : ";
//	cin>>b;
//	cout<<sum(a,b);
//	} 




//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main(){
//	cout<<sqrt(9)<<endl;
//	cout<<cbrt(27)<<endl;
//	cout<<max(23,26)<<endl;
//	cout<<pow(2,7);
//	}


//   //combinaton without function 
//#include<iostream>
//using namespace std;
//
//
//int main(){
//	int n;
//	cin>>n;
//	int r;
//	cin>>r;
//	int a=1;
//	for(int i=1;i<=n;i++){
//		a*=i;
//	}
//	cout<<a<<endl;
//
//	int b=1;
//	for(int i=1;i<=r;i++){
//		b*=i;
//	}
//	cout<<b<<endl;
//	int c=1;
//	for(int i=1;i<=n-r;i++){
//		c*=i;
//	}
//	cout<<c<<endl;
//	cout<<(a/(b*c));
//}







 //combination with function
//#include<iostream>
//using namespace std;
//int fact(int x){
//	int f=1;
//	for(int i=1;i<=x;i++){
//		f*=i;
//	}
//	return f;
//}
//int ncr(int n,int r){
//	int a=fact(n);
//	int b=fact(r);
//	int c=fact(n-r);
//	return a/(b*c);
//}
//
//int main(){
//	int n,r;
//	cin>>n;
//	cin>>r;
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=i;j++){
//			cout<<ncr(i,j)<<" ";
//		}
//		cout<<endl;
//}
//}




//#include<iostream>
//using namespace std;
//int fact(int x){
//	int f=1;
//	for(int i=1;i<=x;i++){
//		f*=i;
//	}
//	return f;
//}
//int ncr(int n,int r){
//	int a=fact(n);
//	int b=fact(r);
//	int c=fact(n-r);
//	return a/(b*c);
//}
//
//int main(){
//	int n,r;
//	cin>>n;
//	cin>>r;
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=n-i-1;j++){
//			cout<<" ";
//		}
//		for(int j=0;j<=i;j++){
//			cout<<ncr(i,j)<<" ";
//		}
//		cout<<endl;
//}
//}


// //swap of 2 number with temp
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cin>>a;cin>>b;
//	cout<<"a ki value phele "<<a<<endl;
//	cout<<"b ki value phele "<<b<<endl;
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//	cout<<"baad me a ki value  "<<a<<endl;
//	cout<<"baad me b ki value  "<<b<<endl;
//	
//	
//}


// //swap of 2 number without temp
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cin>>a;cin>>b;
//	cout<<"a ki value phele "<<a<<endl;
//	cout<<"b ki value phele "<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"baad me a ki value  "<<a<<endl;
//	cout<<"baad me b ki value  "<<b<<endl;
//	
//}
	
	
	
// //swap using function pass by value nhi hoga bbut pass by refrence hoga
// #include<iostream>
// using namespace std;
// void swap(int& x,int& y){
// 	x=x+y;
// 	y=x-y;
// 	x=x-y;
// 	//return x,y;
// }
// int main (){
// 	int x,y;
// 	cin>>x;cin>>y;
// 	swap(x,y);
// 	cout<<x<<" "<<y;
// 	
// }





//#include<iostream>
//using namespace std;
//int main(){
//	int x=3;
//	int* p=&x;
//	cout<<x<<endl;
//	cout<<&x<<endl;
//	cout<<p<<endl;
//	cout<<*p<<endl;
//	cout<<&p<<endl;
//}



// //swap using function pass by value nhi hoga but pass by refrence hoga by using pointers
// #include<iostream>
// using namespace std;
// void swap(int* a,int* b){
// 	int temp=*a;
// 	*a=*b;
// 	*b=temp;
// }
// int main (){
// 	int x,y;
// 	cin>>x;cin>>y;
// 	swap(&x,&y);
// 	cout<<x<<" "<<y;
// 	
// }







