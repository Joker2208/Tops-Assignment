#include<stdio.h>
struct Fruits{
	int fno;
	char fname[20];
	float fprice;
};
int main(){
	struct Fruits f[5];
	int i;
	for(i=0;i<5;i++){
		printf("\nEnter fruit no, name and price:",i+1);
		scanf("%d %s %f",&f[i].fno,f[i].fname,&f[i].fprice);
	}
	printf("\n\tFruit no  \tfruitname  \tfruit price");
	for(i=0;i<5;i++){
		printf("%d %s %f",f[i].fno,f[i].fname,f[i].fprice);
	}
	return 0;
}
