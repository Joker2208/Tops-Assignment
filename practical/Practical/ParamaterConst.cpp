#include<iostream>
using namespace std;
class AreaofCircle{
	public:
		int r;
		AreaofCircle(){                //simple constructor
			cout<<"\nEnter Radius:";
			cin>>r;
		}
		AreaofCircle(int radius){		//parameter constructor
			r=radius;
		}
		void findArea(){
			float a=3.14*r*r;
			cout<<"\nArea of circle:"<<a;
		}
};
main(){
	AreaofCircle a1;
	a1.findArea(); //simple constructor or default
	AreaofCircle a2(20); //parameter constructor
	a2.findArea();
}
