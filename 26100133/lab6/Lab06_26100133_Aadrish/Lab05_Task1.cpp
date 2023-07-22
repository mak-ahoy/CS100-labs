#include <iostream>
using namespace std;

int main(void){
int num;
string str="The integer is divisible by: ";
cout<<"Enter Integer: ";
cin>>num;
// 5,7,11,13
if (num%13==0)
{
    str=str+"Thirteen ";
}
if (num%11==0){
    str=str+"Eleven ";
}
if (num%7==0){
    str=str+"seven ";
}
if (num%5==0){
    str=str+"Five ";
}
     
else{
    str=str+"None of the primes between 5 and 15";
}
cout<<"lasts"<<str;







return 0;
}