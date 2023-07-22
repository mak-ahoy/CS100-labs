#include <iostream>
#include <string>
using namespace std;

int main(){

    int size1;
    char input;
    cout<<"ENTER size OF Array: ";
    cin>>size1;
    
	char* arr1 = new char[size1];

    for (int i=0;i<size1;i++){
        cout<<"Enter value to array: ";
        cin>>input;
		arr1[i] = input;
    }

    for (int j=0;j<size1;j++){
		cout<<arr1[j]<<" , ";
    }

    for (int j=0;j<size1;j++){
		for (int k=0;k<size1;k++){
		       cout<<arr1[j]<<arr1[k]<<" , ";
    }
    }
//Output = a , b , c, aa, ab, ac, bb, ba, bc, cc, ca, cb,

    return 0; 
}