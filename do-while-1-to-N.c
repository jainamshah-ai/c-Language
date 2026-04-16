#include<stdio.h>
void main(){
	
	int a=0,b;
	printf("enter the even number");
	scanf("%d",&b);
//	1to n
	do{
		
		printf("%d\n",a);
		a+=2;
		
	}while(a<=b);
}
