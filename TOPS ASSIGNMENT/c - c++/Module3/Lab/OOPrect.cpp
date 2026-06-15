#include<iostream>
using namespace std;
class rectangle{
	public:
		float length, width;
		
		void input(){
			cin>>length>>width;
		}
		
		void print(){
			cout<<"\nArea: "<<length*width;
		}
};

int main(){
	rectangle r;
	cout<<"\nEnter length and width: ";
	
	r.input();
	r.print();
	
}
