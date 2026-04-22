#include<stdio.h>
int main(){
	int num;
	
	for(num=2;num<=100; num++){
		if(num%2 == 0){
			printf("\n%d",num);
		}
	}
	
	return 0;
}
