#include<iostream>
#include<iomanip>
using namespace std;
int main(){
string inp1, inp2,inp3;
string c1_s , c2_s ,c3_s;
string c1_m , c2_m ,c3_m;
string c1_e , c2_e ,c3_e;
string display="";
cout<<"Input string 1: ";
cin>> inp1;
cout<<"Input string 2: ";
cin>> inp2;
cout<<"Input string 3: ";
cin>> inp3;
c1_s = inp1[0];
c2_s = inp2[0];
c3_s = inp3[0];
c1_m = inp1[inp1.length() /2];
c2_m = inp2[inp2.length() /2];
c3_m = inp3[inp3.length() /2];
c1_e = inp1[inp1.length() -1];
c2_e = inp2[inp2.length() -1];
c3_e = inp3[inp3.length() -1];
display+= c1_s + "_" +c1_m + "_" + c1_e + "_" + c2_s + "_" +c2_m + "_"
+ c2_e + "_" +c3_s + "_" +c3_m + "_" + c3_e;
cout<<"\n\nNew Display String: "<<display;
return 0;
}