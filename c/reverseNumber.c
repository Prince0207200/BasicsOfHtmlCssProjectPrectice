int main(){
	int i,n,ld;
	int res=0;
	scanf("%d",&n);
	for(i=n;n>0;i--){
		ld=n%10;
		res=res*10+ld;
		n=n/10;
	}
	printf("%d",res);
}
