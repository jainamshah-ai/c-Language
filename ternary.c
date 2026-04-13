#include<stdio.h>

void main(){
	 int a,b,c;
	 printf("enter the value");
	 scanf("%d",&a);
	 printf("enter the value");
	 scanf("%d",&b);
	 printf("enter the value");
	 scanf("%d",&c);
	 
	 (a<b)
	   ?((a<c)
	   ?printf("minimum value is %d",a)
	   :printf("minimum value is %d",c))
	   :((b<c)
	   ?printf("minimum value is %d",b)
	   :printf("minimum value is %d",c));
	   return 0;
}
