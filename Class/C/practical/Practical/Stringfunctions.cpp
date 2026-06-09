#include<stdio.h>
#include<string.h>
int main(){
	char str[10]="dipesh";
	printf("\nLen of str=%d",strlen("tops"));
	printf("\nstr concat=%s",strcat(str,"tambakhe"));
	strupr(str);
	printf("\nUpper case=%s",str);
	strlwr(str);
	printf("\nLower Case=%s",str);
	strrev(str);
	printf("\nrev str=%s",str);
	printf("\nstrcmp=%d",strcmp("abc","bbc"));
	
}
