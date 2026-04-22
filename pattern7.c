#include<stdio.h>
void main(){
	int a,b;
	for(a=0;a<=4;a++){
		for(b=a;b>=0;b--){
			printf("%c ",'A'+b);
		}
		printf("\n");
	}
}
