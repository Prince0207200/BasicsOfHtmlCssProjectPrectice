//	static memory allocation			int main(){
//											int a;
//											a=9;
//										}



//int main(){	
//	int *x,*g;
//	x=(int*)malloc(sizeof(int));
//	*x=55;
//	*(x+1)=34;
////	printf("%d ",x);
////	printf("%d %d ",*x,*(x+1));
//	g=(int*)calloc(6,sizeof(int));
//	*g=22;
//	*(g+3)=65;
////	printf("%d ",g);
////	printf("%d  %d ",*(g+3),*g);
////	
//	
//	
//	
//	g=(int*)realloc(g,9);
//	*(g+7)=87;
//	//printf("%d  %d ",*(g+7),*g);
//	
//	free(x); 
//	free(g);    //will delete data in g
//		free(x); 
//	free(g); 
//	
//	printf("%d %d",*(g+7),*x);
//
//}



//int main(){
//	int *g,*x,k;
//	
//	g=(int*)malloc(sizeof(int));
//	*g=56;
//	printf("%d\n",*g);
//	printf("Enter how many memory you want to allocate ");
//	scanf("%d",&k);
//	x=(int*)calloc(k,sizeof(int));
//	*x=22;
//	*(x+3)=49;
//	*(x+43)=98;
//	printf("%d\n",*x);
//	printf("%d %d %d\n",*(x+2),*(x+3),*(x+43));
//	
//}



