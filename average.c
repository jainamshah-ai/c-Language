#include<stdio.h>

void main(){
	
	printf("enter the value");
	int a;
	scanf("%d",&a);
	printf("enter the value");
	int b;
	scanf("%d",&b);
	printf("enter the value");
	int c;
	scanf("%d",&c);
	if(a<100){
		printf("the value is correct");
	}
	else if(b<100){
		printf("the value is correct");
	}
	else if(c<100){
		printf("the value is correct");
	}
	else{
		printf("the value is wrong");
	}
	float average=(a+b+c)*100/300;
	printf("the average marks is %f",average);

}