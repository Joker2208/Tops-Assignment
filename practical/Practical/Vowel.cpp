#include<stdio.h>
main(){
	char a1;
	printf("\nEnter your char:");
	scanf("%ch",&a1);
	
	if(a1=='a' || a1=='A' || a1=='i' || a1=='I' || a1=='e'||a1=='E' || a1=='o' || a1=='O' || a1=='u'|| a1=='U'){
		printf("\nVowel");
	}
	else{
		printf("\nConsonant");
	}
}
