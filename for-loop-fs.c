#include<stdio.h>
void main(){
	
	int a=0,b=1,c,d=1,e=10;
	printf("fs:-");
	
	for( ;d<=e ;d++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
