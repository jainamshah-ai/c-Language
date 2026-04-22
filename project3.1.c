#include<stdio.h>
void main(){
	int a,b=0;
	printf("enter the number");
	scanf("%d",&a);
	do{
		a=a/10;
		b++;
	}while(a!=0);
	printf("%d",b);
}
