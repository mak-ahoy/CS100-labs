#include <iostream>
using namespace std;

int main(void){
string str_main="";
string str_1;
string str_2;
string str_3;
string str_4;
string str_5;
cout<<"Enter 1 string: ";
getline(cin, str_1);
cout<<"Enter 2 string: ";
getline(cin, str_2);
cout<<"Enter 3 string: ";
getline(cin, str_3);
cout<<"Enter 4 string: ";
getline(cin, str_4);
cout<<"Enter 5 string: ";
getline(cin, str_5);

// string x=str_1.substr((str_1.length()-1),1);
// cout<<x;

str_main=str_main+str_1.substr((str_1.length()-1),1)+str_2.substr((str_2.length()-1),1)+str_3.substr((str_3.length()-1),1)+str_4.substr((str_4.length()-1),1)+str_5.substr((str_5.length()-1),1);
cout<< str_main<<endl;


//II


string str_main2="";
str_main2=str_main2+char((str_1.length()+55))+char((str_2.length()+55))+char((str_3.length()+55))+char((str_4.length()+55))+char((str_5.length()+55));

cout<<str_main2;


//III

string str_main3="";
int key=str_1.length();
string str;
str[0]=

if (key>7){
    int x=str_1%(key+55);
    str_main3=str_main3+char((str_1.length()+55)%key)+char((str_2.length()+55)%key)+char((str_3.length()+55)%key)+char((str_4.length()+55)%key)+char((str_5.length()+55)%key);


    
    
}
else {
     str_main3=str_main3+char((str_1.length()+55)%7)+char((str_2.length()+55)%7)+char((str_3.length()+55)%7)+char((str_4.length()+55)%7)+char((str_5.length()+55)%7);
}

cout<<str_main3;
s

return 0;

}