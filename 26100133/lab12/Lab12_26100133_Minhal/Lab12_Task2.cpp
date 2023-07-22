#include <iostream>
#include <string>

using namespace std; 

int main(){
    
    string var;
    char temp;
    cout<<"ENTER STRING TO REVERSE: ";
    getline(cin,var);

    
    //if var.length()%2=0{}
    for (int i=0; i<=(var.length()/2);i++){
        temp=var[i];
        var[i]=var[var.length()-i-1];
        var[var.length()-1-i]=temp;
    }
    
    // cout<<"AFTER REVERSAL: ";
    // for (int i=var.length()-1; i>=0 ;i--){
    //     for(int j=var.length()-1; j>=0;j--){
    //         temp=var[i];
    //         var[i]=var[j-i];
    //         var[j-i]=temp;
    //     }
        
    // }
    cout<<var;



    return 0;
}






