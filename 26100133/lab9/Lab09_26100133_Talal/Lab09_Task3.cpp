#include<iostream>
#include<cmath>
#include <string>
using namespace std;



void hcf(int a, int b){
int hcf;
int smaller;
//string final="";
if (a>b){
    smaller=b;
}
else if(b>a){
    smaller=a;
} 
for ( int i=1; i<=smaller; i++){
    if (a%i==0 && b%i==0){
        hcf=i;
    }   
}


a=a/hcf;
b=b/hcf;

cout<<"SUM OF FRACTIONS ARE: "<<a<<"/"<<b<<endl;


}





void display_fraction(int num1, int den1 , int num2 ,int den2){
    
    int new_num= (num1*den2)+(num2*den1);
    int new_den= (den1*den2);

    double deci= new_num/(new_den*1.0);
    hcf(new_num, new_den);
    cout<<"Value as decimal: " <<deci;


    
}



int main(){
  int x_1;
  int y_1;
  int x_2;
  int y_2;
  cout<<"Enter 1st numerator number: ";
  cin>>x_1;
  cout<<"Enter 1st denominator number: ";
  cin>>y_1;
  cout<<"Enter 2nd numerator number: ";
  cin>>x_2;
  cout<<"Enter 2nd denominator number: ";
  cin>>y_2;
  display_fraction(x_1, y_1, x_2 ,y_2);


  //hcf(54,28);
return 0;
}
