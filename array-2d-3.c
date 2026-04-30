#include<stdio.h>
void main(){
	int n,b,c;
	printf("enter the row & colum size");
	scanf("%d",&n);
	int k=0;
	int a[n][n];
	printf("enter the element");
	for(b=0;b<n;b++){
		for(c=0;c<n;c++){
			scanf("%d",& a[b][c]);
		}
	}
	for(b=0;b<n;b++){
		for(c=0;c<n;c++){
			if(b+c == n-1){
				k=k+a[b][c];
			}
		}
	}
	printf("sum of anti-diagonal element is %d",k);
}
