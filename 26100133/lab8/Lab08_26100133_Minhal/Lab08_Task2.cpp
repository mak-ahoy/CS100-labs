#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){ 

string f_str;
string str;
string sorted;
char tempo;

bool flag=false;



while(true){
    cout<<"Enter sample string: ";
    cin>>str;
    if (!cin.fail()){
        break;
    }
    else{
        cin.clear();
        cin.ignore(10000,'\n');
    }
}
while(true){
    cout<<"Enter string to be found: ";
    cin>>f_str;
    if (!cin.fail()){
        break;
    }
    else{
        cin.clear();
        cin.ignore(10000,'\n');
    }
}

// for (int i=0;i<=str.length()-1;i++){
    
    
    

    
// }

for (int i=0;i<=str.length()-2;i++){
    
    
    for (int j=1;j<=str.length()-1;j++){
   
    if (str[j]>str[i])
    {
       tempo=str[j];
       str[j]=str[i];
       str[i]=tempo;
       
    }
      
}






    
    
    return 0;
}