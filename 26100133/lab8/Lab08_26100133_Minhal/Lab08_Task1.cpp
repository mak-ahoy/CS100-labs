#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){ 

int num;
cin>>num;
for (int i=1; i<=num;i++){
    
    for (int j=num-1; j>=i;j--){
       cout<<" ";  
    }
    for (int k=i; k>=1;k--){
       cout<<k;
    }

    for (int l=2; l<=i;l++){
       cout<<l;  
    }

    cout<<"\n";
    
}
    

    
    
    return 0;
}