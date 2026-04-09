#include <stdio.h>

void main()
{
	 printf("please enter the value");
	int a;
	scanf("%d",&a);
	 printf("please enter the value");
	int b;
		scanf("%d",&b);

	if(a>b){
		printf("the minimum value is %d",b);
	}
    else{
		printf("the minimum value is %d",a);
	}
}