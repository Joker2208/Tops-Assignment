#include<iostream>
using namespace std;
class Multi{
	public:
		int i,j;
		void table(){
			cout<<"\nEnter the number for multiplication table: ";
			cin>>j;
		}
		
		void result(){
			for(i=1;i<=10;i++){
				cout<<"\n"<<i<<"x"<<j<<"="<<i*j;
				
			}
		}
};

int main(){
	Multi m1;
	m1.table();
	m1.result();
}
