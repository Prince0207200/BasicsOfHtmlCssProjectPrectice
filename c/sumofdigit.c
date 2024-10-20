int main(){
	int i,n,ld;
	scanf("%d",&n);
	int sum=0;
	for(i=n;i>0;i--){
		ld=n%10;
		sum=sum+ld;
		n=n/10;
	}
	printf("%d",sum);
}
