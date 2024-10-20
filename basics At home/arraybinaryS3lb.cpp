// #include<iostream>
//using namespace std;
//int mountainpeak(int arr[],int n){
//	int j=n-1;
//	int i=0;
//	//int ans=-1;
//	int mid=i+(j-i)/2;
//	while(i<j){
//	
//		if(arr[mid]<arr[mid+1]){
//			
//			i=mid+1;
//			
//		}
////		if(arr[mid]>arr[mid+1]){
////			i=mid+1;
//			
////		}
//		else{
//			j=mid;
//		
//		}
//		mid=i+(j-i)/2;
//	}
//	return i;
//	
//}
//
//int main(){
//	int arr[]={2,40,5,3,1};
//	int key,n;
//	//cin>>key;
//	
//	n=sizeof(arr)/4;
//
//	cout<<mountainpeak(arr,n);
//	
//	
//}


// #include<iostream>
//using namespace std;
//int getpiot(int arr[],int n){
//	int j=n-1;
//	int i=0;
//	//int ans=-1;
//	int mid=i+(j-i)/2;
//	while(i<j){
//	
//		if(arr[mid]>=arr[0]){
//			
//			i=mid+1;
//			
//		}
////		if(arr[mid]>=arr[mid+1]){
////			i=mid+1;
//			
////		}
//		else{
//			j=mid;
//		
//		}
//		mid=i+(j-i)/2;
//	}
//	return i;
//	
//}
//
//int main(){
//	int arr[]={8,10,17,18,191,2,3};
//	int key,n;
//	//cin>>key;
//	
//	n=sizeof(arr)/4;
//
//	cout<<getpiot(arr,n);
//	
//	
//}

//bahut dought hai

//#include<iostream>
//using namespace std;
//
//
//
//
//int findkey(int arr[],int i,int j ,int key){
//	int j=;
//	int i=0;
//	int mid=i+(j-i)/2;
//	while(i<=j){
//	
//		if(arr[mid]==key){
//			return mid;
//		}
//		if(key>arr[mid]){
//			i=mid+1;
//			
//		}
//		else{
//			j=mid-1;
//		
//		}
//		mid=i+(j-i)/2;
//	}
//	return -1;
//	
//int getpiot(int arr[],int n){
//	int j=n-1;
//	int i=0;
//	//int ans=-1;
//	int mid=i+(j-i)/2;
//	while(i<j){
//	
//		if(arr[mid]>=arr[0]){
//			
//			i=mid+1;
//			
//		}
////		if(arr[mid]>=arr[mid+1]){
////			i=mid+1;
//			
////		}
//		else{
//			j=mid;
//		
//		}
//		mid=i+(j-i)/2;
//	}
//	return i;
//	
//}
//
//int main(){
//	int arr[]={8,10,17,18,191,2,3};
//	int key,n;
//	//cin>>key;
//	
//	n=sizeof(arr)/4;
//
//	cout<<getpiot(arr,n);
//	
//	
//}




#include<iostream>
using namespace std;
long long int sqrtInteger(int n){
	int s=0;
	int e=n;
	int ans=-1;
	long long int mid=s+(e-s)/2;
	while(s<=e){
		long long int square=mid*mid;
		
		if(square==n){
			return mid;
		}
		if(square<n){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		int mid=s+(e-s)/2;
	}
	return ans;
	cout<<ans;
}
double morePrecision(int n,int precision,int tempSol){
	double factor=1;
	double ans=tempSol;
	for (int i=0;i<precision;i++){
		factor/=10;
		
		for(double j=ans;j*j<n;j+=factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
	int n;
	cout<<"enter the num.."<<endl;
	cin>>n;
	
	int tempSol=sqrtInteger(n);
	cout<<"Answer is"<<morePrecision(n,3,tempSol);
	
	return 0;
	
	
}
