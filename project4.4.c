//10101
// 1010
//  101
//   10
//    1
#include<stdio.h>
void main(){
	int a,b,c;
	for(a=1;a<=5;a++){
		for(b=1;b<a;b++){
			printf(" ");
		}
		for(c=5;c>=a;c--){
			if(c%2!=0){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
}
