#include<stdio.h>
void main(){
	
	int a,b;
	printf("enter the value");
	scanf("%d",&a);
	printf("enter the value");
	scanf("%d",&b);
	
	for( ; a<= b;a++){
		if(a % 2 == 0){
			printf("%d\n",a);
		}
	}
}
