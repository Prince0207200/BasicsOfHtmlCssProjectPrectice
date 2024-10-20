//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={4,12,8,10};
//	int n;
//	n=sizeof(arr)/4;
//	int mx=INT_MIN;
//	for (int i=0;i<n;i++){
//		mx=max(mx,arr[i]);
//	}
//	
	//cout<<mx;
//}


//#include<iostream>
//using namespace std;
//int getMax(int arr[],int n){
//		int mx=INT_MIN;
//	for (int i=0;i<n;i++){
//		mx=max(mx,arr[i]);
//	}
//	return mx;
//}
//int getMin(int arr[],int n){
//		int mn=INT_MAX;
//	for (int i=0;i<n;i++){
//		mn=min(mn,arr[i]);
//	}
//	return mn;
//}
//int sumofArr(int arr[],int n){
//	int sum=0;
//	for (int i=0;i<n;i++){
//		sum+=arr[i];
//	}
//	return sum;
//}
//int main(){
//	
//	int arr[]={4,12,8,7,76,23,1,10};
//	int n;
//	n=sizeof(arr)/4;
//	cout<<getMax(arr,n)<<endl;
//	cout<<getMin(arr,n)<<endl;
//	cout<<sumofArr(arr,n);
//}



//#include<iostream>
//using namespace std;
//int linearS(int arr[],int n,int key){
//	for (int i=0;i<n;i++){
//		if(arr[i]==key) return 1;
//		else{
//			return 0;
//		}
//	}
////	return 1;
//}
//int main(){
//	int arr[]={4,12,8,7,76,23,1,10};
//	int n;
//	int key;cout<<"key..";
//	cin>>key;
//	n=sizeof(arr)/4;
//	bool found=linearS(arr,n,key);
//	if (found){
//		cout<<"founded";
//	}else{
//		cout<<"absent";
//	}
//	//cout<<linearS(arr,n,key);
//	
//}


#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
	int i=0;
	int j=n-1;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;j--;
	}

}
void printArray(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void alterswap(int arr[],int n){
	int i=0;
	int j=1;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;j++;
	}

}
void alterArray(int arr[],int n){
	for (int i=0;i<n;i++){
		if(i%2==0){
			alterswap(arr,n);
		}
	}
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int n;
	n=sizeof(arr)/4;
//	reverseArray(arr,n);
//	printArray(arr,n);
	alterArray(arr,n);
	printArray(arr,n);
}
