#include<stdio.h>
int main(){
	int a,b,c;
	printf("\nEnter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b && a>=c){
		printf("\n%d is the largest.",a);
	}
	else if(b>=a && b>=c){
		printf("\n%d is the largest.",b);
	}
	else if(c>=a && c>=b){
		printf("\n%d is the largest.",c);
	}
	else{
		printf("\nNumber is Zero.");
	}
	return 0;
}
