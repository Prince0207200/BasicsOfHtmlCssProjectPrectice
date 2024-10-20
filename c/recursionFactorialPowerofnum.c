//void fun1(){
//	printf("bye ");
//	fun1();
//}
//
//void fun2(){                               //recursion
//	printf("hello ");
//	fun1();
//}
//
//int main(){
//	printf("hii ");	
//	fun1();
//	fun2();
//}


//int factorial(int n){
//	int i;
//	
//	int fact=1;
//	for (i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	return fact;                    //factorial with loop
//}
//
//void main(){
//	int n;
//	scanf("%d",&n);
//	int l=factorial(n);
//	printf("%d",l);
//	
//}

//int  fact(int k){
//	if(k==1){
//		return 1;
//	}
//	else{
//		
//		return k*fact(k-1);
//	}                                            //factorial without loop but with recursion
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",fact(n));
//}



//int  addition(int k){
//	if(k==1){
//		return 1;
//	}
//	else{
//		
//		return k+addition(k-1);
//	}                                            //factorial without loop but with recursion
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d",addition(n));
//}




//int main(){
//	int n,power;
//	scanf("%d %d",&n,&power);            //power
//	int i;
//	int multi=1;
//	for(i=1;i<=power;i++){
//		multi=multi*n;
//	}
//	printf("%d",multi);
//}
