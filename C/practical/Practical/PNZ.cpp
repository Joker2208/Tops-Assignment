#include<stdio.h>
main(){
	int num;
	printf("\nEnter a number:");
	scanf("%d",&num);
	
	if(num > 0){
		printf("\nYour number is positive");
	}
	else if(num < 0){
		printf("\nYour number is Negative.");
	}
	else{
		printf("\nYour number is Zero.");
	
	}
	
}
