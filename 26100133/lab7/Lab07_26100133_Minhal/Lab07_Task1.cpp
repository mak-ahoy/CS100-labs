#include<iostream>  //calling liberaries
#include<cmath> //for maths
#include<string> //for string inputs

using namespace std;
int main(){   // main function
int row,col , rc, cc;  // declaraton of variables for row , column and other required steps
cout<<"Enter row: "; //displaying message for user friendliness
cin>>row;    // taking input for row no.
cout<<"Enter col: ";  //displaying message for user friendliness
cin>>col;  // taking input for row no.
cout<<"Enter row to change "; //displaying message for user friendliness
cin>>rc; // getting row index where we need to change the letter 
cout<<"Enter col to change "; //displaying message for user friendliness
cin>>cc; // getting column index where we need to change the letter 
    for (int i=0;i<row;i++){   // looping to set the row values to "*"
        for (int j=0;j<col;j++){ // looping to set the column values to "*"
            if (i==rc && j==cc){  // checks if the posion mentioned is in the the range of table 
            cout<<" C ";  // outputs "C" if true
            }
            else{
            cout<<" * ";  // outputs "*" if false
            }
        }
    cout<<"\n";  // breaks the line and continues to next line after col max reached
    }
return 0;
}



//Sample Output

// Enter row: 5
// Enter col: 6
// Enter row to change 3
// Enter col to change 5
//  *  *  *  *  *  * 
//  *  *  *  *  *  * 
//  *  *  *  *  *  * 
//  *  *  *  *  *  C 
//  *  *  *  *  *  * 