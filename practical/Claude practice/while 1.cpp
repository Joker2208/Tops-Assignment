#include<stdio.h>
int main(){
	
	int a;
	printf("\nEnter a value:");
	scanf("%d",&a);
	
	while(a != -1){
		printf("\nEnter a value:",a);
		scanf("%d",&a);
	}
	
	printf("\nStopped");
	return 0;
}
