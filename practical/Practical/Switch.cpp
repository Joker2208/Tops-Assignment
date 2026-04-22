#include<stdio.h>
main(){
	printf("\nPress 1 for English");
	printf("\nPress 2 for Hindi");
	printf("\nPress 3 for Gujarati");
	printf("\nPress 4 for Marathi");
	
	int choice;
	printf("\n\nEnter your choice:");
	scanf("%d",&choice);
	
	switch (choice){
	
	case 1:
		printf("\nInformation is in English");
	break;
	
	case 2:
		printf("\nInformation is in Hindi");
	break;
	
	case 3:
		printf("\nInformation is in Gujarati");
	break;
	
	case 4:
		printf("\nInformation is in Marathi");
	break;
	
	default:
		printf("Wrong Input");
	break;
}
}
