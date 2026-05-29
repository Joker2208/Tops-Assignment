#include<stdio.h>
struct User{
	int uid;
	char name[20];
	char email[30];
	int std;
};
main(){
	struct User u1={"Dipesh",101."dipseditor@gmail.com",12};
	printf("\nName=%s",u1.name);
	printf("\nUserid=%d",u1.uid);
	printf("\nEmail=%s",u1.email);
	printf("\nStd=%d",u1.std);
}
