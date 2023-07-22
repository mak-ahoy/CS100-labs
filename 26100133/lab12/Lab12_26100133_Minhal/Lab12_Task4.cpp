#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


void stat(double arr[7]){
    int temp;

    for (int i=0; i<7; i++){
        for (int j=0; j<6; j++){
            if (arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }

int mean;
int mode;
int median;

int sum=0;

for (int i=0; i<7; i++){
        sum = sum+arr[i];
    }
 mean=sum/7;

median= (arr[2]+arr[3])/2.0;
 
mode=0; // time out

arr[0]=mean;
arr[1]=mode;
arr[2]=median;

}




int main()
{

    double arr[7]={1,5,3,6,3,6,7};
    stat(arr);
    
    cout<<"MEAN: "<<arr[0]<<endl;
    cout<<"MODE: "<<arr[1]<<endl;
    cout<<"MEDIAN: "<<arr[2]<<endl;
    return 0;
}