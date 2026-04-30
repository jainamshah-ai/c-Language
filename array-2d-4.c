#include<stdio.h>
void main(){
	int a=5,b[5][5],c=0,d,e;
	printf("enter the element");
	for(d=0;d<a;d++){
		for(e=0;e<a;e++){
			scanf("%d",&b[d][e]);
		}
	}
	printf("boundry element:-\n");
	for(d=0;d<a;d++){
		for(e=0;e<a;e++){
			if(d==0 || d==a-1 || e==0 || e==a-1){
				printf("%d ", b[d][e]);
				c+=b[d][e];
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("sum = %d",c);
}
