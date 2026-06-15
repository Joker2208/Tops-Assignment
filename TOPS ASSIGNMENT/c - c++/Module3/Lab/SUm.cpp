#include<iostream>
using namespace std;
class Sum{
	public:
		int i,j;
		
		void input(){
			cin>>i;
			cin>>j;		
		}
		
		void print(){
			cout<<"\nSum: "<<i+j;
		}
		
};

int main(){
	Sum s;
	
	cout<<"\nEnter any 2 numbers: ";
	s.input();
	s.print();
}
