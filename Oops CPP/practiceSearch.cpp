//#include<iostream>
//using namespace std;
//
//int linearSearch(int n,int a[],int Search){
//	int i;
//	for (i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for (i=0;i<n;i++){
//		if(a[i]==Search){
//			//cout<<i<<endl;
//			return i;
//		}
//	}
//		cout<<"not found"<<endl;
//		return -1;
//	
//}
//
//int main(){
//	int n,Search;
//	cin>>n;
//	int a[n];
//	cin>>Search;
//	
//	
//	cout<<linearSearch(n,a,Search);
//}



//#include<iostream>
//using namespace std;
//
//int binarySearch(int n,int a[],int Search){
//	int i;
//	for (i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int s=0;
//	int e=n-1;
//	while(s<e){
//		int mid=s+(e-s)/2;
//		if(a[mid]==Search){
//			return mid;
//		}
//		else if(a[mid]<Search){
//			s=mid+1;
//		}
//		else if(a[mid]>Search){
//			e=mid-1;
//		}
//	}
//	return -1;
//	
//}
//
//int main(){
//	int n,Search;
//	cin>>n;
//	int a[n];
//	cin>>Search;
//	
//	
//	cout<<binarySearch(n,a,Search);
//}


//#include<iostream>
//using namespace std;
//
//int binarySearch(int n,int a[],int Search){
//	int i;
//	for (i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(i=0;i<n-1;i++){                        //selection sort
//		int j;
//		for(j=i+1;j<n;j++){
//			if (a[j]<a[i]){
//				int temp=a[j];
//				a[j]=a[i];
//				a[i]=temp;
//			}
//		}
//	}
//	cout<<"Sorted array is ";
//	for (i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	int s=0;
//	int e=n-1;
//	while(s<=e){
//		int mid=s+(e-s)/2;
//		if(a[mid]==Search){
//			cout<<"element at index ";
//			return mid;
//		}
//		else if(a[mid]<Search){
//			s=mid+1;
//		}
//		else if(a[mid]>Search){
//			e=mid-1;
//		}
//	}
//	return -1;
//	
//}
//
//int main(){
//	int n,Search;
//	cin>>n;
//	int a[n];
//	cin>>Search;
//	
//	
//	cout<<binarySearch(n,a,Search);
//}






//#include<iostream>
//using namespace std;
//
//int binarySearch(int n,int a[],int Search){
//	int i;
//	for (i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int counter=1;
//	while(counter<n){
//		for(i=0;i<n-counter;i++){            //bubble sort
//			if(a[i]>a[i+1]){
//				int temp=a[i];
//				a[i]=a[i+1];
//				a[i+1]=temp;
//			}
//		
//		}
//		counter++;
//	}
//	cout<<"Sorted array is ";
//	for (i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	int s=0;
//	int e=n-1;
//	while(s<=e){
//		int mid=s+(e-s)/2;
//		if(a[mid]==Search){
//			cout<<"element at index ";
//			return mid;
//		}
//		else if(a[mid]<Search){
//			s=mid+1;
//		}
//		else if(a[mid]>Search){
//			e=mid-1;
//		}
//	}
//	return -1;
//	
//}
//
//int main(){
//	int n,Search;
//	cin>>n;
//	int a[n];
//	cin>>Search;
//	
//	
//	cout<<binarySearch(n,a,Search);
//}





//
//#include<iostream>
//using namespace std;
//
//int binarySearch(int n,int a[],int Search){
//	int i;
//	for (i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for (i=1;i<n;i++){
//		int current=a[i];
//		int j=i-1;
//		while(a[j]>current &&j>=0){
//			a[j+1]=a[j];
//			j--;
//			
//		}
//		a[j+1]=current;
//	}
//	cout<<"Sorted array is ";
//	for (i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	int s=0;
//	int e=n-1;
//	while(s<=e){
//		int mid=s+(e-s)/2;
//		if(a[mid]==Search){
//			cout<<"element at index ";
//			return mid;
//		}
//		else if(a[mid]<Search){
//			s=mid+1;
//		}
//		else if(a[mid]>Search){
//			e=mid-1;
//		}
//	}
//	return -1;
//	
//}
//
//int main(){
//	int n,Search;
//	cin>>n;
//	int a[n];
//	cin>>Search;
//	
//	
//	cout<<binarySearch(n,a,Search);
//}

