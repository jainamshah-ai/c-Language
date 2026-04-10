#include<stdio.h>

void main(){
	int a,b,c,d;
	printf("enter the value");
	scanf("%d",&a);
	printf("enter the value");
	scanf("%d",&b);
	printf("enter the value");
	scanf("%d",&c);
	printf("enter the value");
	scanf("%d",&d);
	if(a>=b){
		if(a>=c){
			printf("%d is larger",a);
			if(a>=d){
				printf("%d is larger",a);
			}else{
				printf("%d is larger",d);
			}
		}else{
			printf("%d is larger",c);
			if(c>=d){
				printf("%d is larger",c);
			}else{
				printf("%d is larger",d);
			}
		}
		
	}else{
		if(b>=c){
			printf("%d is larger",b);
			if(b>=d){
				printf("%d is larger",b);
			}else{
				printf("%d is larger",c);
			}
		}else{
			if(c>=d){
				printf("%d is larger",c);
			}else{
				printf("%d is larger",d);
			}
		}
	}
}