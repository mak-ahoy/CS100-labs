#include<iostream>
#include<cmath>
using namespace std;

void swap( int&a, int& b){

a=a+b;
b=a-b;
a=a-b;
}

// void order(int& x, int& y , int& z){
// int arr[3]={3 , 2, 1}
// for (int 0; i<1; i++){
//    if (arr[i]>arr[i+1]){
//        swap(arr[i],arr[i+1])
//    }
// }
// }

void fun(int& x, int& y, int& z){

    int arr[3]={x , y, z};
    for (int i = 0; i<3; i++){
        for (int j = 0; j<2; j++){
    if (arr[j]<arr[j+1]){
        swap(arr[j],arr[j+1]);
   }
    }
    }

   for (int j=0; j<3; j++){
        cout<< arr[j]<<endl;
      
    }

   
}

int main(){
  int x,y,z;
  cout<<"Enter num 1:";
  cin>>x;
  cout<<"Enter num 2:";
  cin>>y;
  cout<<"Enter num 3:";
  cin>>z;
  fun(x,y,z); 

  return 0;
}