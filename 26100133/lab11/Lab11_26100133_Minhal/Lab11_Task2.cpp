#include <iostream>
using namespace std;

void fill_arr(int arr[], int n){
    
    for (int i=0; i<n;i++){
        cout<<"Enter item: ";
        cin>>arr[i];
    }
    
}

void del_val( int arr[], int del_item, int n ){
   
    cout<<"Before delete: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
   // int k=n;
    for (int i=0; i<n; i++){
        if (arr[i]==del_item){
            int j=i;
            while(j<n){
                arr[j]=arr[j+1];
                j++;
            }
            n--;
            i--;
        }
        

    }
    // new size = n-change
    cout<<"\n"<<"After delete: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    //cout<<"strt";
    //int arr[10]={4,3,4,4,4,4,6,3,1,5};
    int len;
    int arr[30];
    int val_to_del;
    cout<<"Enter size of array : ";
    cin>>len;
    cout<<"Enter value to delete: ";
    cin>>val_to_del;
    if (len<=30){
     fill_arr(arr,len);
    }
    else{
        cout<<"size is out of range.";
    }
    del_val(arr, val_to_del, len);

    return 0;

}