//int main(){
//	int n,temp,ld,nod;
//	int i,res=0;
//	printf("Enter no of digit in your number");
//	scanf("%d",&nod);
//	printf("Now enter digit");
//	scanf("%d",&n);
//	temp=n; 
//	
//	for(i=temp;i>0;i--){
//		ld=temp%10;
//		res=res+pow(ld,nod);
//		temp=temp/10;
//	}
//	if(n==res){
//	printf(" It is armstrong no%d",res);
//}
//	else
//	printf("not armstrong%d",res);
//}



//int main(){
//	int a,b,c,d,e,x,y;
//	scanf("%d",&x);
//	y=x;
//	a=y%10;
//	y=y/10;
//	b=y%10;
//	y=y/10;
//	c=y%10;
//	y=y/10;
//	e=y%10;
//	y=y/10;
//	d=(a*a*a)+(b*b*b)+(c*c*c)+(e*e*e)+(y*y*y);
//	printf("%d",d);
//	
//}




////print all the arm strong num between 1 to 
//int main(){
//	int x,y,t,s;
//	for(x=1;x<1000;x++){
//		s=0;
//		y=x;
//		while(y!=0){
//			t=y%10;
//			s=s+(t*t*t);
//			y=y/10;
//		}
//		if(x==s){
//			printf("%d ",s);
//		}
//		
//	}
//	
//}
