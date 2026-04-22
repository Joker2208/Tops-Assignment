#include<stdio.h>
int main(){
	int a;
	printf("\nEnter your number:");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("\nIt is Monday.");
		break;
		
		case 2:
			printf("\nIt is Tuesday.");
		break;
		
		case 3:
			printf("\nIt is Wednesday.");
		break;
		
		case 4:
			printf("\nIt is Thursday.");
		break;
		
		case 5:
			printf("\nIt is Friday.");
		break;
		
		case 6:
			printf("\nIt is Saturday.");
		break;
		
		case 7:
			printf("\nIt is Sunday.");
		break;
	
		default:
			printf("\nInvalid Entry.");
		break;
	}
	
	return 0;
}
