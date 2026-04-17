#include<stdio.h>
void main(){
	
	int a;
	printf("enter the value");
	scanf("%d",&a);
	
	for( ; 1<=a ;a--){
		if(a % 2 != 0){
			printf("%d\n",a);
		}
	}
}
