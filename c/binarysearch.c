int main(){
	int s=0,n;
	printf("Enter no of element ");
	scanf("%d",&n);
	int e=n-1;
	int a[n];
	int mid=s+(e-s)/2;
	int search;
	int i;
	printf("enter num to search "); 
	scanf("%d",&search);
	printf("Enter all element ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
for(i=0;i<=mid;i++){
	mid=s+(e-s)/2;
	if (search==a[mid]){
		printf("found");
		break;
	}
	else if(search>a[mid]){
		s=mid+1;
	}
	else if(search<a[mid]){
		e=mid-1;
	}
	
		
}
	if(i>mid){
		printf("not found");
	}
	
}
