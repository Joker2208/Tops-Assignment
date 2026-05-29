#include<stdio.h>
main(){
	int a,b;
	printf("\nEnter the value of a and b:");
	scanf("%d %d",&a,&b);
	
	if(a>0 && b>0){
		printf("\nFirst Quadrent");
	}
	else if(a>0 && b<0){
		printf("\nSecond Quadrant");
	}
	else if(a<0 && b>0){
		printf("\nThird Quadrant");
	}
	else if(a<0 && b<0){
		printf("\nFourth Quadrant");
	}
	else{
		printf("\nCentre Line");
	}
}
