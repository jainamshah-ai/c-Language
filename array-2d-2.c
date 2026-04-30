#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("enter the row size");
	scanf("%d",&a);
	printf("enter the column size");
	scanf("%d",&b);
//	array 1
	int A[a][b],B[a][b],C[a][b];
	printf("enter the row element\n");
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			scanf("%d",&A[c][d]);
		}
	}
//	array 2
	printf("enter the coloum element\n");
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			scanf("%d",&B[c][d]);
		}
	}
	
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			C[c][d]=A[c][d]+B[c][d];
		}
	}
	
	printf("array c is:-\n");
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			printf("%d",C[c][d]);
		}
	printf("\n");
	}
}
