#include<iostream>
using namespace std;
class grade{
	public:
		
		int marks;

		void result(){
		cout<<"\nEnter your marks:";
		cin>>marks;
		
		if(marks>=90){
			cout<<"\nYour grade is A.";
		}
			
		else if(marks>=80){
			cout<<"\nYour grade is B.";
		}
		
		else if(marks>=60){
			cout<<"\nYour grade is C.";
		}
		
		else{
			cout<<"\nFail.";
		}
		}
};

int main(){
	grade g;
	g.result();
}

