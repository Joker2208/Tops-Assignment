#include<stdio.h>
int main(){
	int choice;
	float a,b,result;
	
	printf("\nPlease select 1 option from the menu below:");
	printf("\n\nPress 1 for '+'");
	printf("\nPress 2 for'-'");
	printf("\nPress 3 for '*'");
	printf("\nPress 4 for '/'");
	
	printf("\n\nEnter your choice:");
	scanf("%d",&choice);
	
	if(choice < 1 || choice > 4){
		printf("\nInvalid choice. Please try again.");
	}
	
	
	printf("\nEnter 2 numbers:");
	scanf("%f %f",&a, &b);
	
	switch(choice){
		case 1:
			result=a+b;
			printf("Ans is:%.2f",result);
		break;
		
		case 2:
			result=a-b;
			printf("Ans is:%.2f",result);
		break;
		
		case 3:
			result=a*b;
			printf("Ans is:%.2f",result);
		break;
		
		case 4:
			if(b==0){
				printf("\nError: Division by zero.");
			}
			else {
			result=a/b;
			printf("Ans is:%.2f",result);
		}
		break;
		
		default:
			printf("\nInvalid choice.Try again.");
		break;
	}
	
	return 0;
	
}
