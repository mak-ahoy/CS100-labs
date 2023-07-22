#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double num1;
cout<<"Input a decimal number to be displayed to 3 decimal places: ";
cin>> num1;
cout<<"Output to 3 decimal places: "<<fixed<<setprecision(3)<<num1;
return 0;
}