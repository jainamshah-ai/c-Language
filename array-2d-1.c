#include<stdio.h>
void main(){
    int a,b,c,d;
	float sum=0,avg,mul;
    printf("enter the row size");
    scanf("%d",&a);
    printf("enter the column size");
    scanf("%d",&b);
//    2d array
    int array[a][b];
    printf("enter the elements");
    for(c=0;c<a;c++){
    	for(d=0;d<b;d++){
    		scanf("%d",&array[c][d]);
    		sum=sum+array[c][d];
		}
	}
	mul=a*b;
	avg=sum/mul;
	printf("the average is %f",avg);
}
