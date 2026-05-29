#include<stdio.h>
int main(){
	float ma,sci,phy,total,max,percent;
	printf("\nEnter your marks for maths, science and physics:");
	scanf("%f %f %f",&ma, &sci, &phy);
	
	total=ma+sci+phy;
	max=300;
	percent= (total / max)*100;
	printf("\nYour total marks are:%.2f \nYour percentage are:%.2f",total,percent);
	
	if(percent>=90){
		printf("\nYour grade is A.");
	}
	else if(percent>=80){
		printf("\nYour grade is B.");
	}
	else if(percent>=65){
		printf("\nYour grade is C.");
	}
	else{
		printf("\nYou failed.");
	}
	return 0;
}
