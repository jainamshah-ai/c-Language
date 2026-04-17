#include<stdio.h>
void main(){
	int a=0,b=1,c,d=1,e=10;
	printf("fs-");
	
	do{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		
		d++;
	}while(d<=e);
}
