#include <iostream>
#include <iomanip>
using namespace std;

int main(){
string name="";
string grade;

cout<<"Enter user name: ";
//cin>>name;
getline(cin,name);
cout<<"Enter grade of CS 100: ";
cin>>grade;


if (name.length()>7 && name.substr(0,1)=="R")
{
    cout<<"You will get an A in Data Science for Dummies!";
}
else if(grade=="A")
{
   cout<<"You will get an B+ in Data Science for Dummies!";
}
else if((grade=="C"||grade=="C+" || grade=="D" || grade=="D+"|| grade=="F") && name.substr(0,1)=="J") 
{
   cout<<"You will get an F in Data Science for Dummies!";
}
else{
    cout<<"Your fate is your own!. Grade cannot be predited";
}
    
return 0;
}