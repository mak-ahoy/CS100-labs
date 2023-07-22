#include<iostream>
#include<cmath>
using namespace std;


int dotprod(int arr_1[], int arr_2[], int x, int y )
{
int sum = 0;

if (x != y){
    cout<<"Dimentions not correct";
    return 0;
}
else{
    for (int i=0; i<x; i++){
    sum= sum+(arr_1[i]*arr_2[i]);
    }
    return sum;
}





}

int main(){

    int a[4];
    int b[4];
    int x,y;

    for (int i=0; i<4; i++){
        cin>>x;
        a[i]=x;
    }

    for (int i=0; i<4; i++){
        cin>>y;
        b[i]=y;
    }


int size_a=sizeof(a)/sizeof(a[4]);
int size_b=sizeof(b)/sizeof(b[4]);
  // cout<<sizeof(a)/sizeof(a[4]);
   cout<<"The dot product is :"<< dotprod(a , b, size_a, size_b );


    return 0;
}