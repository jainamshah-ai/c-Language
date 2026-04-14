#include<stdio.h>
void main(){
	
	char grade;
	int a;
	printf("enter the marks");
	scanf("%d",&a);
	
	if(a>100){
		printf("Invalid...");
	}else{
			grade=(a>=90)?'A':
	       (a>=70)?'B':
	        (a>=50)?'C':
	         (a>=33)?'D':'F';
	         printf("your grade is %c",grade);
	         //swith statement
	         switch(grade){
	         	case 'A':
	         		printf("\nyou have done excellent work");
	         		break;
	         		
	         	case 'B':
	         		printf("\nyou have done well");
	         		break;
	         		
	         	case 'C':
	         		printf("\nyou have done good job");
	         		break;
	         		
	         	case 'D':
	         		printf("\nyou have passed but you can do better");
	         		break;
	         		
	         	case 'F':
	         		printf("\nsorry you have failed");
	         		break;
	         		
	         	default:
	         		printf("\ninvalid marke");
	         		break;
			 }
			 
			 if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'd'){
			 	printf("\nyou are eligible for next level");
			 }else {
			 	printf("\nyou are not eligible for next level plese try next year");
			 }
	}
	

}
