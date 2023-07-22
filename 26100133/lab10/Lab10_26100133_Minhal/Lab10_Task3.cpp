#include<iostream>
#include<cmath>
using namespace std;

int counter=0;
int highest=0;
void recur(int num){
   
     if (num==1){
         return ;
     }
     counter++;
    if (num%2==0){
     if(highest<num){
         highest=num;
     };
     recur(num/2);
    }
    else {
        recur(3*num+1);
       
    }
}



int main(){
int n;
int count=0;
cout<<"Enter input value: ";
cin>>n;


recur(n);
cout<<counter<<" "<<highest;


    return 0;
}