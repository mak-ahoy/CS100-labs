#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;
int main(){ 
int size;
int trace=0;
int num;
int sum=0;
srand(time(0));



cout<<"Enter square matrix size: ";
cin>>size;


// while(cin.fail()){
    

//     if (size==0){
//        cout<<"Enter a positive integer ";
//        cin>>size;
//     }
//     else if(cin.fail()){
//         cout<<"Enter an iteger value greater than 0 ";
//         cin.clear();
//         cin.ignore(10000,'\n');
//     }
//     else{
//         break;
//     }
// }




for (int i=1; i<=size;i++){
   for (int j=1; j<=size;j++){
   cout<<" "<<i+j;
}
   cout<<"\n";
}


for (int j=1; j<=size;j++){  
   trace=trace+(2*j);
}

cout<<"Trace of matrix is: "<<trace<<endl;

num=rand()%(size-1+1)+1;
//cout<<num;

for (int k=1; k<=size;k++){  
   sum=sum+(num+k);
}
cout<<"Sum of col "<<num<<": "<<sum<<endl;   
   
    return 0;
}