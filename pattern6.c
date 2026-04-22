 #include<stdio.h>
void main(){
	int a,b;
	for(a=1;a<=5;a++){
		for(b=5;b>=a;b--){
			if(b % 2 != 0){
				printf("1");
			}else{
				printf("0");
			}
			
		}
		printf("\n");
	}
}
