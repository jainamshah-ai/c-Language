#include<stdio.h>
void main(){
	int a,b,c;
	for(a=1;a<=5;a++){
		for(b=a;b>=1;b--){
			printf(" ");
		}
		for(c=5;c>=a;c--){
			printf("%d",c);
		}
		printf("\n");
	}
}
