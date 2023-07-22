#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs

using namespace std;
int main(){ 
int max;
int temp;



while (true){
    cout<<"Enter number: ";
    cin>>max;
    if (cin.fail()){
        cin.clear() ;
        cin.ignore(100000,'\n');
        cout<<"      ***ERROR***     "<<endl;
    }
    else if (max>=0 && max<=999){
        

        for (int num=0; num<=max;num++){
            int hundreds=num/100;
            temp=num;
            int rem=num%100;
            int tens=rem/10;
            int units=rem%10;
                
               if(  (pow(hundreds,3)  +  pow(tens,3)  +  pow(units,3)) ==num){
                    cout<<num<<" ";
                }
        
            
        }
        if (temp==max){
            break;
        }
   
    cout<<endl;

       

    }
    else{
        cout<<"Input Integer between 0 and 999"<<endl;
    }

}









// int a,b,c,d ;
// int count=123;
// a=count/100;
// b=count%100;
// c=b/10;
// d=b%10;

// cout<<a<<endl;
// cout<<b<<endl;
// cout<<c<<endl;
// cout<<d<<endl;


//123
// 1 a 
// 23
// 2 b
// 3 c


  return 0;
}