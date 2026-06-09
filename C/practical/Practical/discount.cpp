#include<stdio.h>
int main(){
	float a,b;
	
	printf("\nEnter your bill:",a);
	scanf("%f",&a);
	
	if(a > 500){
		b=a*0.85;
		printf("\nYour final bill is %.2f",b);
	}
	else{
		printf("\nYour bill is %.2f");
	}
	return 0;
	
}
