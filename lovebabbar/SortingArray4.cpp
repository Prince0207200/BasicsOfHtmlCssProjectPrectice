#include<iostream>
#include<algorithm>
using namespace std;

void sortArray(int arr[],int size){
	for (int i = 0; i < size-1 ; i++) {
        for (int j = 0; j < size - i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int size;
	cout<<"Enter the size of array\n";
	cin>>size;
	
	cout<<"Enter the  array element \n";
	int arr[1000];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sortArray(arr,size);
	
	
	
}
