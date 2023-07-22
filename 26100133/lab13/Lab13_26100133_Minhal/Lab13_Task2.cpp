#include <iostream>
#include <string>
using namespace std;

int main(){
    int row, col, input=0, sum=0;
	// Declareing  rows
    cout<<"ENTER NO OF ROWS: ";
    cin>>row;
    

	int** arr = new int*[row];
    int* arr2 = new int[row];

	for (int i = 0; i < row; i++) {
        cout<<"ENTER NO OF COLUMNS OF ROW "<<i<<": ";
        cin>>col;
		arr[i] = new int[col];
        arr2[i]=col;// adding col no per row.
	}
    
	//ading values in array the 2D array
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < arr2[i]; j++) {
            cout<<"Enter value to array: "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>input;
			arr[i][j] = input;
		}
    }
    cout<<endl;
    cout<<"DISPLAY\n";
    for (int i = 0; i < row; i++) {
		for (int j = 0; j < arr2[i]; j++) {
            cout<<arr[i][j]<<" ";
		}
        cout<<endl;
    }

    cout<<endl;
     cout<<"SUM OF ROWS \n";
    for (int i = 0; i < row; i++) {
		for (int j = 0; j < arr2[i]; j++) {
            sum = sum+arr[i][j]; 
            
           // sum=0;
		}
        cout<<"Sum of Row "<<i<<" : "<<sum;
        sum=0;
        cout<<endl;
    }
   // delete[] arr;
    return 0; 
}