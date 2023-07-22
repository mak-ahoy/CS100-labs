#include<iostream>
#include<iomanip>
using namespace std;
int main(){
string inp;
cout<<"Input a string to be displayed at the centre of the termianl: ";
getline(cin, inp);
cout<<setw(20)<<inp;
return 0;
}

