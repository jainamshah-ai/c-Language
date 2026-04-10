#include<stdio.h>

void main(){
	int a,b,c;
	 printf("enter the value");
	 scanf("%d",&a);
	 printf("enter the value");
	 scanf("%d",&b);
	 printf("enter the value");
	 scanf("%d",&c);
	 if(a>=b){
	 	//a is big
	 	if(a>=c){
	 		printf("%d is largest",a);
		 }else{
		 	printf("%d is largest",c);
		 }
	 }else{
	 	if(b>=c){
	 		printf("%d is largest",b);
		 }else{
		 	printf("%d is largest",c);
		 }
	 	
	 }

      


}
       