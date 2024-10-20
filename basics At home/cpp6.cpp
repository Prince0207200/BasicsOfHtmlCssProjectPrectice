//arrays
//#include<iostream>
//using namespace std;

//int main(){
//	int arr[6];
//	for(int i=0;i<=6;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<=6;i++){
//		cout<<arr[i]<<" ";
//	}
//	arr[2]=54;
//	
//	
//		for(int i=0;i<=6;i++){
//		cout<<arr[i]<<" ";
//	}
//	
//}

//int main(){
//	int arr[]={1,5,9,6,5,4,3,7,0,88,8,3,2,7,3,6};
//	int sum=0;
//	int n;
//	int i;
//	int pro=1;
//	n=sizeof(arr)/4;
//	for( i=n;i>=0;i--){
//		cout<<arr[i]<<" ";
//		sum+=arr[i];
//		pro*=arr[i];
//	}
//	cout<<sum<<endl;
//	cout<<pro;
//}



//find the maximimum valueof all the element


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main(){
//	int arr[]={19,4,81,2,0,9,43,270,43};
//	
//	int n;
//	n=sizeof(arr)/4;
//	int mx=arr[0];
//	
//	for (int i=0;i<n;i++){
//		//if (arr[i]>mx) mx=arr[i];
//		mx=max(arr[i],mx);
//		
//	}
//	cout<<mx;
//}
	


//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[]={23,76,3,2,7765,8,4,32,98};
//	
//	int n;
//	int mn=arr[0];
//	n=sizeof(arr)/4;
//	for (int i=0;i<n;i++){
//		//if(mn>arr[i]) mn=arr[i];
//		mn=min(arr[i],mn);
//	}
//	cout<<mn;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//
//int main(){
//	int n;
//	cout<<"enter no of term";
//	cin>>n;
//	int arr[n];
//	
//	for (int i=0;i<n;i++){
//		cout<<"enter "<<i<<"index value ";cin>>arr[i];
//	}
//	for (int i=0;i<n;i++){
//		cout<<pow(arr[i],2);
//	}
//	
//}




//#include<iostream>
//#include<cmath>
//using namespace std;
//
//
//int main(){
//	int n;
//	cout<<"enter no of term";
//	cin>>n;
//	int arr[n];
//	
//	for (int i=0;i<n;i++){
//		cout<<"enter "<<i<<" index value ";cin>>arr[i];
//	}
//	int smx=INT_MAX;
//	int mx=INT_MAX;
//	for (int i=0;i<n;i++){
//		mx=min(mx,arr[i]);
//		
//		
//	}
//	for (int i=0;i<n;i++){
//	    if(arr[i]!=mx) smx=min(smx,arr[i]);
//		
//		
//	}
//	cout<<mx;
//	cout<<smx; 
//	
//	
//}







//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={1,21,6,93,4,56,6};
//	int n;
//	n=sizeof(a)/4;
//	int i=0;
//	int j=n-1;
//	while(i<j){
//		int temp=a[i];
//		a[i]=a[j];
//		a[j]=temp;
//		i++;j--;
//		
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
//	
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int n;cin>>n;
//	int arr[n];
//	for (int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n;i++){
//		if(arr[i]==arr[n-i-1]){
//		}
//			cout<<"given array is pallindrome"<<endl;
////		else{
////			cout<<"not";
////		}
//	}
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int n1,n2;
//	cin>>n1;
//	cin>>n2;
//	int arr[n1][n2];
//	for(int i=0;i<n1;i++){
//		for(int j=0;j<n2;j++){
//			cout<<"enter value of index " <<(i)<<" "<<j<<endl;
//			cin>>arr[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<n1;i++){
//		for(int j=0;j<n2;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	
//}




//#include<iostream>
//using namespace std;
//int main(){
//	int arr[2][3]={1,2,3,4,5,6};
//	int arr1[2][3]={13,23,6,7,85,34};
//	int arr2[2][3];
//
//    
//	for(int i=0;i<2;i++){
//		for(int j=0;j<3;j++){
//			arr2[i][j]=arr[i][j]+arr1[i][j];
//		cout<<arr2[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int arr[3][3]={{1,1,8},{4,2,1},{3,1,1 }};
//	
//
//    int pro=1;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			pro*=arr[i][j]; 
//		}
//		
//	}
//	cout<<pro;
//	
//}



//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	cout<<"Enter a string..";
//	cin>>s;
//	
//	
//}



//#include<iostream>
//using namespace std;
//int main(){
//	string s="ram ki nagri Aaram Ek do";
//	int count=0;
//	for (int i=0;i<s.length();i++){
//		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
//			count++;
//		}
//	}
//			cout<<count;	
//}



//#include<iostream>
//using namespace std;
//int main(){
//	string s;
//	getline(cin,s);
//	int n=s.length();
//	for (int i=0;i<n;i++){
//		if(i%2==0){
//			s[i]='a';
//		}
//	}	
//	cout<<s;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	string s ="abki baar hmari sarkar";
//	cout<<s<<endl;
//	//s.append(" apple");
//	int n=s.length();
//	s="kyo bhai?"+s;
//	cout<<n<<s;	
//}



//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s ="abki baar hmari sarkar";
//		cout<<s<<endl;
//	int n=s.length();
//	int i=0;
//	int j=n-1;
//	while(i<j){
//		int temp=s[i];
//		s[i]=s[j];
//		s[j]=temp;
//		i++;j--;
//	}
//	cout<<s;	
//}


//#include<iostream>
//using namespace std;
//int main(){
//	string s ="*abki baar   hmari sarkar";
//	int n=s.length();
//	int i=2;
//	int j=5;
//	while(i<j){
//		char temp=s[i];
//		s[i]=s[j];
//		s[j]=temp;
//		i++;j--;
//	}
//	cout<<s;
//		
//}




//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s="123487";
//	int x= stoi(s );
//	
//	cout<<x;
//		
//}


