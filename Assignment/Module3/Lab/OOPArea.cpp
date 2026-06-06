#include<iostream>
using namespace std;
int rect(){
	float area, length, width;
	
	cout<<"\nEnter length: ";
	cin>>length;
	
	cout<<"\nEnter width: ";
	cin>>width;
	
	area=length*width;
	
	cout<<"\nArea of rectangle: " << area;	
}

int main(){
	rect();
}
