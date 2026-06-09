#include<stdio.h>
int main(){
	char str[10],rev[10];
	int i=0,counter=0,j,k;
	puts("\n Enter string");
	gets(str);
	
	while(str[i] !='\0'){
		counter++;
		i++;
	}
	printf("\nLength of the string=%d i=%d",counter,i);
	i--;
	j=i;
	
	while(j>=0){
		rev[k]=str[j];
		printf("\nstr[%d]=%c rev[%d]=%c",j,str[j],k,rev[k]);
		k++;
		j--;
	}
	printf("\nrevstring=%s",rev);
	return 0;
}
