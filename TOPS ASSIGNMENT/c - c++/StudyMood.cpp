#include<iostream>
using namespace std;
float hours;

void input(){
    cout<<"Enter the hours you studied today: ";
    cin>>hours;
}

void motivation(){
    if(hours>6){
        cout<<"Great job. Also remember to take a break too";
    }
    else if (hours>=5)
    {
        cout<<"Great Work";
    }
    else if (hours>=4)
    {
       cout<<"Good! You are getting better.";
    }
    else {
        cout<<"Try harder.";
    }
    
}
int main(){
    input();
    motivation();
}