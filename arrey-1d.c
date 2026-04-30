#include<stdio.h>
void main(){
	int n,i;
	printf("enter the value");
	scanf("%d",&n);
	
	int a[n];
	printf("enter the element");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	printf("length %d",n);
}
