#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs

using namespace std;
int main(){ 
int num;
int sum=0;
int max=-1;

cout<<"Enter positive number: ";
cin>>num;

while (num>=0){
    if (cin.fail()){
        cin.clear() ;
        cin.ignore(100000,'\n');
        cout<<"      ***ERROR***     "<<endl;
    }
    else{
        if (num>max){
            max=num;
        }
        sum=sum+num;
    }
    cout<<"Enter positive number: ";
    cin>>num;
}

cout<<"Sum of positive entered integer: "<<sum<<endl;
cout<<"Maximum value: "<<max;


    return 0;
}