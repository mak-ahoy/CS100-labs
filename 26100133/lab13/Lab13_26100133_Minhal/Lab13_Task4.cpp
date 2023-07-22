#include <iostream>
#include <string>
using namespace std;
void sort(int arr[], int size){
    for (int i=0; i<size;i++){
        for (int j=0; j<size-1;j++){
        if (arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
    }
    }

}
int main(){
    int size1, size2, input1, input2,sum=0;
	// Declareing  rows
    cout<<"ENTER size OF first Array: ";
    cin>>size1;
    cout<<"ENTER size OF second Array: ";
    cin>>size2;

	int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* median = new int[size1+size2];
    cout<<"FILL FIRST ARRAY\n";
	for (int i = 0; i < size1; i++) {
        cout<<"Enter value to 1st array : ";
            cin>>input1;
			arr1[i] = input1;
		
	}
    cout<<"\n";
    cout<<"FILL SECOND ARRAY\n";
    for (int j = 0; j < size2; j++) {
            cout<<"Enter value to 2nd array: ";
            cin>>input2;
			arr2[j] = input2;
		}
    cout<<"\n";
    cout<<"ARRAYS FILLED...\n";
    
    // sort(arr1,size1);
    // sort(arr2,size2);

    for (int k = 0; k < size1; k++) {
			median[k] = arr1[k];
		}
        int index=0;
    for (int t = size1; t < (size1+size2); t++) {
			median[t] = arr2[index];
            index++;
	    }
    
     for (int l = 0; l < (size1+size2); l++) {
			cout<<median[l]<<" "; 
	    }
    
    sort(median,size1+size2);
    cout<<"\nSORTED"<<endl;
    for (int l = 0; l < (size1+size2); l++) {
			cout<<median[l]<<" "; 
	    }
    int mean_index;
    cout<<endl;
    if ( (size1+size2)%2==0){
         mean_index=(size1+size2)/2;
         cout<<"MEDIAN: "<<(median[mean_index-1]+median[mean_index])/2.0;
    }
    else{
         mean_index=((size1+size2)/2);
         cout<<"MEDIAN: "<<median[mean_index];
    }
    
    

    return 0; 
}