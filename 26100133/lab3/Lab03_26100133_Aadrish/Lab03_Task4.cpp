#include <iostream>
using namespace std;
int main() {


const int PI=3;
int r;
int h; 

cout<<"Enter Can radius: ";
cin>> r;
cout<<"Enter Can height: ";
cin>> h;
cout<<"";
cout<<"The amount of paint required for each can = "<< 2*((2*PI*r*h)+(2*PI*r*r))<<" ml";

return 0;


}