#include<stdio.h>
int main(){
	int a;
	printf("\nEnter your number:");
	scanf("%d",&a);
	
	if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
		printf("\nThere are 31 days in this month.");	
	}
	else if(a==4 || a==6 || a==9 || a==11){
		printf("\nThere are 30 days in this month.");
	}
	else if(a==2){
		printf("\nThere are 28 days in the month.");
	}
 else{
		printf("\nInvalid entry.Try again");
	}
	return 0;
}
