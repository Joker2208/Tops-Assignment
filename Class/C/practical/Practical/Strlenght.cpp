#include<stdio.h>
int main(){
	char str[10];
	int i=0,counter=0;
	puts("\n Enter string");
	gets(str);
	
	while(str[i] !='\0'){
		counter++;
		i++;
	}
	printf("\nLength of the string=%d",counter);
	
}
