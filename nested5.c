#include<stdio.h>
void main(){
	int a,b,c,d,e;
	printf("enter the value");
	scanf("%d",&a);
	printf("enter the value");
	scanf("%d",&b);
	printf("enter the value");
	scanf("%d",&c);
	printf("enter the value");
	scanf("%d",&d);
	printf("enter the value");
	scanf("%d",&e);
	if(a>=b){
		if(a>=c){
			printf("the maximum value is %d",a);
			if(a>=d){
				printf("the maximum value is %d",a);
				if(a>=e){
					printf("the maximum value is %d",a);
				}else{
					printf("the maximum value is %d",e);
				}
			}else{
				printf("the maximum value is %d",d);
				if(d>=e){
					printf("the maximum value is %d",d);
				}else{
					printf("the maximum value is %d");
				}
			}
		}else{
			if(c>=d){
				if(c>=e){
					printf("the maximum value is %d",c);
				}else{
					printf("the maximum value is %d",e);
				}
			}else{
				printf("the maximum value is %d",d);
				if(d>=e){
					printf("the maximum value is %d",d);
				}else{
					printf("the maximum value is %d",e);
				}
			}
		}
		
	}else{
		if(b>=c){
			printf("the maximum value is %d",b);
			if(b>=d){
				printf("the maximum value is %d",b);
				if(b>=e){
					printf("the maximum value is %d",b);
				}else{
					printf("the maximum value is %d",e);
				}
			}else{
				printf("the maximum value is %d",d);
				if(d>=e){
					printf("the maximum value is %d",d);
				}else{
					printf("the maximum value is %d");
				}
			}
		}else{
			if(c>=d){
				if(c>=e){
					printf("the maximum value is %d",c);
				}else{
					printf("the maximum value is %d",e);
				}
			}else{
				printf("the maximum value is %d",d);
				if(d>=e){
					printf("the maximum value is %d",d);
				}else{
					printf("the maximum value is %d",e);
				}
			}
		}
	}
}
