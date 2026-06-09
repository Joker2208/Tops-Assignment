#include<stdio.h>
int main(){
	int i,j;
	
	
	for(i=1; i<=5; i++){
	for(j=1; j<=5; j++){
		
		//this condition is to print border ex: if u are at a border then print *
		if(i==1 || i==5 || j==1 || j==5 ){
			printf("* ");
		}
		
		// or else leave an empty space
		else{
		
			printf("  ");

		}
		
		// this tells u to go down and check the above condtions again
		}
			printf("\n");


	}
	return 0;
}

