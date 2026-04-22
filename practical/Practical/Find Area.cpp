#include<stdio.h>
int main(){
	
	printf("\nPress 1 to find area of Circle.");
	printf("\nPress 2 to find area of Rectangle.");
	printf("\nPress 3 to find the area of Triangle.");
	
	int choice;
	float area,l,r,b,br,h;
	printf("\n\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nEnter radius:");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("\nArea is %.2f",area);
		break;
		
		case 2:
			printf("\nEnter your length and breadth:");
			scanf("%f %f",&l,&br);
			area=l*br;
			printf("\nArea is %.2f",area);
		break;
		
		case 3:
			printf("\nEnter your base and height:");
			scanf("%f %f",&b,&h);
			area=0.5*b*h;
			printf("\nArea is %.2f",area);
		break;
		
		default:
			printf("\nInvalid choice.");
		break;
			
			
	}
	
	return 0;
	
}
