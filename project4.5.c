//    5
//   454
//  34543
// 2345432
//123454321
#include<stdio.h>
void main(){
	int a,b,c;
	for(a=5;a>=1;a--){
		for(b=1;b<a;b++){
			printf(" ");
		}
		for(c=a;c<5;c++){
			printf("%d",c);
		}
		for(c=5;c>=a;c--){
			printf("%d",c);
		}
		printf("\n");
	}
}
