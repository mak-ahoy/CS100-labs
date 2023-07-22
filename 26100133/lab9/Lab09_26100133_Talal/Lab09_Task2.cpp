#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include <string>

using namespace std;


string add(string a, string b){
    string str_x1="";
    string str_y1="";
    string str_x2="";
    string str_y2="";

    int j;
    int k;

    int num_x1=0;
    int num_y1=0;
    int num_x2=0;
    int num_y2=0;
    //int counter=0; 
    
   // getting x and y in first string 
    for (int i =0;  i<= (a.length()-1); i++ ){
        j=i+1;

        if (a.substr(i,1) == "+")  {
             break;
        }
        else{
            str_x1= str_x1+ a.substr(i,1);
        }
        
        
    }
    
    for (int i =j;  i<= (a.length()-2); i++ ){
        str_y1= str_y1+ a.substr(i,1);
    }

//*****************************************************************************




    // getting x and y in second string 
    for (int i =0;  i<= (b.length()-1); i++ ){
        k=i+1;

        if (b.substr(i,1) == "+")  {
             break;
        }
        else{
            str_x2= str_x2+ b.substr(i,1);
        }
        
        
    }
    
    for (int i =k;  i<= (b.length()-2); i++ ){
        str_y2= str_y2+ b.substr(i,1);
    }
         
   num_x1= stoi(str_x1);
   num_y1= stoi(str_y1);
   num_x2= stoi(str_x2);
   num_y2= stoi(str_y2);


   int sum_1= num_x1+ num_x2;
   int sum_2= num_y1+ num_y2;
    
   string str_all=  to_string(sum_1)+"+"+to_string(sum_2)+"i";
    

   


//    cout<<str_x1<<" "<<str_y1<<endl;
//    cout<<str_x2<<" "<<str_y2<<endl;
//    cout<<str_all;


return str_all;
}


int main(){ 
string comp_1;
string comp_2;
cout<<"Enter first complex number: ";
cin>>comp_1;
cout<<"Enter second complex number: ";
cin>>comp_2;


cout<< add(comp_1,comp_2);
       
 return 0;
}