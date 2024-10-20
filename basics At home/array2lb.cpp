//#include<iostream>
//using namespace std;
//
//void printArray(int arr[],int n){
//	for (int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//}
//void alterSwap(int arr[],int n){
//	for(int i=0;i<n;i+=2){
//		if(i<n){
//			swap(arr[i],arr[i+1]);
//		}
//	}
//}
//int main(){
//	int arr[]={1,2,3,4,5,6,7};
//	int n;
//	n=sizeof(arr)/4;
//	alterSwap(arr,n);
//	printArray(arr,n);
//	
//}

//#include<iostream>
//using namespace std;
//
//void printArray(int arr[],int n){
//	for (int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//}
//void alterSwap(int arr[],int n){
//	for(int i=0;i<n;i+=2){
//		if(i<n){
//			//swap(arr[i],arr[i+1]);
//			int temp=arr[i];
//			arr[i]=arr[i+1];
//			arr[i+1]=temp;
//		}
//	}
//}
//int main(){
//	int arr[]={1,2,3,4,5,6,7};
//	int n;
//	n=sizeof(arr)/4;
//	alterSwap(arr,n);
//	printArray(arr,n);
//	
//}






//#include<iostream>
//using namespace std;
//
//
//void linearS(int arr[],int n,int key){
//	for(int i=0;i<n;i+=1){
//		if(arr[i]==key){
//			cout<<"present"<<endl;
//			
//		}
//	}
//}
//int main(){
//	int arr[]={1,2,3,4,5,6,7};
//	int n;
//	int key;
//	cin>>key;
//	n=sizeof(arr)/4;
//	linearS(arr,n,key);
//	
//	
//}




//#include<iostream>
//using namespace std;
//int findkey(int arr[],int n,int key){
//	int j=n-1;
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
//}
//
//int main(){
//	int arr[]={2,4,6,8,10,12};
//	int key,n;
//	cin>>key;
//	
//	n=sizeof(arr)/4;
//
//	cout<<findkey(arr,n,key);
//	
//}





#include<iostream>
using namespace std;
int mountainpeak(int arr[],int n){
	int j=n-1;
	int i=0;
	//int ans=-1;
	int mid=i+(j-i)/2;
	while(i<j){
	
		if(arr[mid]<arr[mid+1]){
			
			i=mid+1;
			
		}
//		if(arr[mid]>arr[mid+1]){
//			i=mid+1;
			
//		}
		else{
			j=mid;
		
		}
		mid=i+(j-i)/2;
	}
	return i;
	
}

int main(){
	int arr[]={2,4,6,8,3,1};
	int key,n;
	//cin>>key;
	
	n=sizeof(arr)/4;

	cout<<mountainpeak(arr,n);
	
	
}

