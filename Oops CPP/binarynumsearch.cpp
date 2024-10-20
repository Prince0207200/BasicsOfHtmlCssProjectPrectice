#include<iostream>
using namespace std;



int search(int Search,int n){
	int m,i,l=0,r=n-1,a[n];
	
	cout<<"Enter "<<n<<" numbers "<<endl;
	for(i=0;i<n;i++){
	cin>>a[i];
}
	while(l<=r){
	m=(l+r)/2;
	if(a[m]==Search){
		cout<<"num is found at position"<<m+1<<endl;
		break;
	}
	else if(a[m]>Search){
		r=m-1;
	}else if(a[m]<Search){
		l=m+1;
	}
	
}if(l>r){
	cout<<"num not found "<<endl;
	}
}
int main(){

int Search;
cout << "Enter num you want to search"<<endl;
cin>>Search;
int n,i;
int a[n];

cout<<"Enter range "<<endl;
cin>>n;


search(Search,n);
}

