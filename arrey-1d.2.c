#include<stdio.h>
void main(){
	int n,i;
	float sum=0,avg;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("enter arrey element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("average of arrey %.3f",avg);
}
