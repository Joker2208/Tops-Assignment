#include<stdio.h>
main(){
	int maths,phy,chem,total,subtotal;
	printf("\nEnter marks of maths, chem,Phy:");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths>=50 && chem>=60 && phy>=70){
		total=maths+phy+chem;
		subtotal = maths+phy;
		if(subtotal>=100 || total>=150){
			printf("\nEligible for admission.");
		}
		else{
			printf("\nInner Not eligible for admission");
		}
	}
	else{
		printf("\nOuter not eligible for admission");
	}
}
