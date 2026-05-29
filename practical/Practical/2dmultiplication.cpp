#include<stdio.h>
int main(){

	int a[2][2],b[2][2],c[2][2],i,j;
	printf("\nEnter value for 2d matrix for A:");

	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter value for 2d matrix of B:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nb[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("\nMultiplication of 2d matrix is:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\tc[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
