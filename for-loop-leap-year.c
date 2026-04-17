#include<stdio.h>
void main(){
	
	int a,b;
	printf("enter the year");
	scanf("%d",&a);
	printf("enter the year");
	scanf("%d",&b);
	
	for( ;a<=b ;a+=4)
	{
		printf("%d\n",a);
	}
}
