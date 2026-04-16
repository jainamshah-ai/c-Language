#include<stdio.h>
void main(){
	
	int a,b;
	printf("enter the year");
	scanf("%d",&a);
	printf("enter the year");
	scanf("%d",&b);
//	a<=b
	while(a<=b){
		
		printf("%d\n",a);
		a+=4;
	}
}
