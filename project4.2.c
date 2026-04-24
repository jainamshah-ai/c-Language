#include<stdio.h>
void main(){
	int a,b,c=11;
	for(a=11;a<=14;a++){
		for(b=a;b>=11;b--){
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}
