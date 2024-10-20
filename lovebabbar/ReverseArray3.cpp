#include<iostream>
#include<algorithm>            //header for reverseing array
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of array\n";
	cin>>size;
	
	cout<<"Enter the  array element \n";
	int arr[1000];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	reverse(arr,arr+size);  //reverseing array by predefined function
	
	//printing reversed array
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}







//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//void reverseArray(int arr[],int size){
//	for(int i=0;i<(size/2);i++){
//		int temp=arr[i];
//		arr[i]=arr[size-1-i];      //by swapping start (i) to end (size-1-i)
//		arr[size-1-i]=temp;
//	}
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//int main(){
//	int size;
//	cout<<"Enter the size of array\n";
//	cin>>size;
//	
//	cout<<"Enter the  array element \n";
//	int arr[1000];
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	reverseArray(arr,size);
//	
//	
//	
//}






//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//void reverseArray(int arr[],int size){
//	int start=0;
//	int end=size-1;
//	
//	while(start<end){
//		swap(arr[start], arr[end]);
//		start++;
//		end--;
//	}
//	
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//int main(){
//	int size;
//	cout<<"Enter the size of array\n";
//	cin>>size;
//	
//	cout<<"Enter the  array element \n";
//	int arr[1000];
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	reverseArray(arr,size);
//	
//	
//	
//}
