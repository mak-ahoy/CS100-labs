//This code counts the numbr of invalid inputs given by user and displays them.
//importing required liberaries
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){   // main function
int nums , iter=0;  //declarinfg and inintiating variables 
int wrong=0;   //inittialising varibale as 0
    while (iter<10){   // while loop checks for condition if iter varibale is less than 10 and goes in block if condition is true
    cout<<"Input Value: "<<iter+1<<" ";  
    cin>>nums;  //taking input from user 
        if (cin.fail()){   //checks if the input given by user is valid
        cin.clear();   // clears the input taken by user form memory
        cin.ignore(10000, '\n');  // ignores the invalid input and goes to new line to take the input again.
        wrong++;  // incremnts wrong with +1
        iter--; //decrements iter variable
        }
    iter++;  // increments iter out of if loop
    }
cout<<"\n\nyou gave "<<wrong <<" wrong inputs!";  // dipalyes the user the number of invalid inputs they gave
return 0;  //end of program
}
/* OUTPUT
Input Value: 1 5
Input Value: 2 5
Input Value: 3 -8
Input Value: 4 55
Input Value: 5 kmlkm
Input Value: 5 5
Input Value: 6 5454
Input Value: 7 5454
Input Value: 8 544
Input Value: 9 54
Input Value: 10 5


you gave 1 wrong inputs!
*/