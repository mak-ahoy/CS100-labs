#include<iostream>
#include<iomanip>
using namespace std;


int main(){

    double price;
    double tax;
    double pretax;

    cout<<"Enter article price after tax: ";
    cin>>price;
    cout<<"Enter tax %age: ";
    cin>>tax;
    pretax= (price*100)/(100+tax);
    cout<<"Pretax price of the article is: = "<<fixed<<setprecision(3)<<pretax;


return 0;
}
