#include<iostream>
using namespace std;

class game{
	public:
		int i,j=83;

		void input(){
			cout<<"\nGuess the number: ";
			cin>>i;
		}
		
		void print(){
			while(i!=j){
				if(i>j){
					cout<<"\nToo high.Try again.\n";
					input();
				}
				else {
					cout<<"\nToo low.Try again.\n";
					input();
				}
			}
			cout<<"\nCongrats you win.";
		}
};

int main(){
	game g1;
	g1.input();
	g1.print();
}
