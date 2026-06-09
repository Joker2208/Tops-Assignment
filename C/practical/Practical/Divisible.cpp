#include<stdio.h>
main(){
	int num;
	printf("\nEnter your number:");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0){
		printf("\nNumber is divisible by 5 and 11.");
	}
	else{
		printf("\nNumber is not divisible by 5 and 11.");
	}
}
