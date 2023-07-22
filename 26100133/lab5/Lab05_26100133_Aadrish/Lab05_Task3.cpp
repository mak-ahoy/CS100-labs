#include <iostream>
using namespace std;

int main(void){
    
    string user;
    string pass;
    cout<<"Enter Username";
    cin>>user;
    // int(s[0])

    if (user.substr(0,8)=="CS100_S3")
    {   cout<<"Enter password";
        cin>>pass;
        if (pass.length()==4){
            if(int(pass[0])>=65){
               if(int(pass[0])<=90){
                   if(pass[2]=='@'){
                       cout<<"Password is valid";
                                   }
                   else{
                       cout<<"Invalid password: @ not included";
                       }
                                       }
                else{
                cout<<"Doesnt start with capital letter";
                    }        
            }
            else{
                cout<<"Doesnt start with capital letter";
                }
                
        }
        else{
            cout<<"Length not valid";
            }


    }

    else{
    cout<<"Username not registered";
    }
    

return 0;
}