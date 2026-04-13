#include<stdio.h>
void main(){
	int service;
	printf("enter 1 for english\n");
	printf("enter 2 for gujarati\n");
	printf("enter 3 for hindi\n");
    printf("enter 4 for help\n");
	scanf("%d",&service);
	
	switch(service){
		case 1://english
			switch(service){
				case 1:
					printf("enter 1 for internet recharge");
					break;
					case 2:
						printf("enter 2 for top-up recharge");
						break;
						case 3:
							printf("enter 3 for special recharge");
							break;
							default:
								printf("press 4 for going back");
								break;
			}
			break;
			case 2://gujarati
				switch(service){
					case 1:
						printf("internet recharge mata 1 dabavo");
						break;
						case 2:
							printf("top-up recharge mata 2 dabavo");
							break;
							case 3:
							printf("special recharge mata 3 dabavo");
							break;
							default :
								printf("pacha java mata 4 dabavo");
								break;
				}
				break;
				case 3://hindi
					switch(service){
						case 1:
							printf("internet recharge ka lia 1 dabaiya");
							break;
							case 2:
								printf("top-up recharge ka lia 2 dabaiya");
								break;
								case 3:
									printf("special recharge ka lia 3 dabaiya");
									break;
									default :
										printf("vapas jana ka lia 4 dabaiya");
										break;
					}
					break;
					default:
						printf("for getting help please dial the number 95781xxxxx");
						break;
				
	}
}
