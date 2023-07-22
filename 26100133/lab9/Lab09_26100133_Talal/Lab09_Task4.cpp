#include<iostream>
#include<cmath>
#include <string>
using namespace std;


string small(string str){

string new_str="";

if (str[0]>='a' && str[0]<='z'){
     new_str= new_str +char(str[0]-32);
}
else{
     new_str= new_str+char(str[0]);
}

for (int i=1 ; i<str.length(); i++){    
     if (str[i]>='A' && str[i]<='Z'){
        char j=str[i]+32;
         new_str= new_str +j;
     }
     else{
         new_str= new_str +char(str[i]);
    }
    
}
while(str[str.length()-1]!='.'){
     new_str= new_str +'.';
    break;
}

return new_str;
}


int main(){

string str_main;
//string new_str="";


 cout << "Enter string to ouncatuate: ";
 getline(cin,str_main);
 
cout << "Cuncatuate string is : ";
 cout<<small(str_main);

return 0;
}