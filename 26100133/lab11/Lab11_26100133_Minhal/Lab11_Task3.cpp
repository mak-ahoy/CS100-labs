#include <iostream>
using namespace std;


void sum(int arr[], int n){
    if (n<1){
        return;
    }
        //int pass[n-1];
         for (int i=0 ; i<n; i++){
         if (i==(n-1)){
         cout <<arr[i]<<" ";
         }
         else{
             cout<<arr[i]<<"  ";
         }
         }
         cout<<endl;

        for (int i=0;i<n-1; i++){
            int x = arr[i] +arr[i+1];
            arr[i] = x;
        }
        
        
         sum(arr, n-1);


    
     }


int main(){

int arr[3]= {2, 5 , 7};

// for (int i=0 ; i<3;i++){
//     cout>>"Enter value: ";
//     cin>>arr[i];
// }
sum(arr, 3);
}