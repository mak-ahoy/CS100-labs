#include<iostream>
#include<iomanip>
using namespace std;


int main(){

string f_name;
string l_name;
string dob;
string head;
string c_id="";
int cat_1;
int cat_2;
int cat_3;
double t_bill;
double d_bill;
int bags;
int carry;
int t_items;


cout<<"-----------------------User Registration-----------------------"<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<"Please enter your first name ";
cin >> f_name;
cout<<"Please enter your last name ";
cin >> l_name;
cout<<"Please enter your DOB ";
cin >> dob;

c_id+= f_name + "_"+l_name+"_"+dob;  // works



head="Hello "+f_name+", Welcome to the LUMS Store, Your customer ID is: "+ c_id;
//cout<<head.length();
cout<<setw(95)<<head<<endl;
cout<<setw(70)<<" Happy Shopping "<<endl;
cout<<" "<<endl;

cout<<"All Items in cateory 1 are for Rs. 60"<<endl;
cout<<"All Items in cateory 2 are for Rs. 130"<<endl;
cout<<"All Items in cateory 3 are for Rs. 200"<<endl;

cout<<" "<<endl;
cout<<"Please enter the total number of item you wish to purchase from category 1 ";
cin>>cat_1;
cout<<"Please enter the total number of item you wish to purchase from category 2 ";
cin>>cat_2;
cout<<"Please enter the total number of item you wish to purchase from category 3 ";
cin>>cat_3;

t_bill=(cat_1*60)+(cat_2*130)+(cat_3*200);

d_bill=(0.86*t_bill);
t_items=cat_1+cat_2+cat_3;
bags=t_items/3;
carry=t_items%3;




cout<<"Your total bill is: "<<fixed<<setprecision(2)<<t_bill<<endl;
cout<<"Your total bill after discount is: "<<fixed<<setprecision(2)<<d_bill<<endl;
cout<<"You will need "<<bags<<" bag/bags."<<endl;
cout<<"You will have to carry "<<carry<<" item/items."<<endl;

cout<<"----------------------------------------------------------------------------------------"<<endl;
cout<<" "<<endl;
cout<<setw(55)<<"Printing your Reciept"<<endl; 
cout<<""<<endl;
cout<<"User Id                Num of items             Num of bag            Total before Discont                Final Total "<<endl;
cout<<c_id<<"              "<<t_items<<"                       "<<bags<<"                       " <<t_bill<<"                          "<<d_bill<<endl;
 
cout<<"  "<<endl;
cout<<" " <<endl;
cout<<setw(60)<<"Thank you for shopping with us!"<<endl;
return 0;

}