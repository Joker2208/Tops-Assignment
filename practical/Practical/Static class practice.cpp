#include<stdio.h>
float pi=3.14;
void test(){
	printf("\nGlobal variable in function pi=%f",pi);
}

void add(int a,int b){   //Example of formal parameter (SCOPE)
	int c=a+b;
	printf("\nAddition=%d",c);
}
int main(){
	
	int x=10;      //Example of LOCAL VARIABLE (Scope)
	{
		int y=90;   // LOCAL VARIABLE
		printf("\ny=%d",y);
	}
	printf("\nGlobal variable pi=%f",pi);
	test();
	add(10,20);
	
	return 0;
}
