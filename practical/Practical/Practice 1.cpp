#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("Enter temperature in Celcius:");
	scanf("%f", &celcius);
		
	fahrenheit=(celcius*9/5)+32;
	printf("\nfahrenheit = %f",fahrenheit);
	
	int a;
	printf("\n\nEnter your number:");
	scanf("%d",&a);
	
	(a%2==0) ? printf("%dYour number is Even",a) : printf("%dYour number is odd",a);
	
	int n1,n2,n3;
	printf("\nEnter your numbers:");
	scanf("%d %d",&n1,&n2);
	n3=(n1>n2)?n1:n2;
	printf("\nMax Number is:%d",n3);
	
	int age;
	printf("\nEnter your age:");
	scanf("%d",&age);
	
	(age>=18)?printf("\nYou are eligible for voting",age):printf("\nYou are not eligible for voting",age);
	
	
}

