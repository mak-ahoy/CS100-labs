#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs

using namespace std;
int main(){ 
    int num;
    int step=1;
    int count=0;
    cout<<"Enter Integer: ";
    cin>>num; 
    if (num<0){
        cout<<"Negative number entered";
    }
    else if (num==0){
        cout<<"No. has digits: "<<1;
    }
    else{
           while ((num/step)!=0){
               count=count+1;
               step=step*10;

           }
    cout<<"No. has digits: "<<count;
    }
    
    
    
    return 0;
}