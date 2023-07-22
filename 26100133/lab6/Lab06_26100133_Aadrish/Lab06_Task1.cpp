//this code converts an integer decimal number into it binary equalent.

// Including liberaries for fuctions implementation

#include<iostream>
#include<cmath>
#include<string>   
using namespace std;
int main(){  //main function
int num; //defining varaiblefor later use

//while loop to check for conditon if the num is between 0 and 100
while(true){
cout<<"Enter Integer Between 0 and 100: ";  //display for user friendliness 
cin>>num;  // input fro user and stored in num
if (num<0 || num>100){   // chwcking condition if the input is in the range

continue;  // continous the whileloop if the condition is true
}
else{
break;  // breaks the loop if the condition is not met ie number not in range whenthe user enters an out of range integer
}
}
string bin="";  // iintialisation of a string variable 
while (num>0)   // while loop checking if the num has value greater than then 0 
{
if (num%2==0){  // if the number is even then proceed to if block statements
num = num /2;  // reassigning of the numrber after dividing by 2
bin = "0"+bin;  // concatinating "0" in the variable bin if num is even
}
else{
num = num /2;   // if number is odd then this statement executes 
bin = "1"+bin;  // binary number 1 is concatinated i the strng bin
}
}
cout<<"Binary value of integer is: "<<bin;    // binary value of input integer is dispalyed to the user
return 0; // end of program
}



// OUTPUT:
//Enter Integer Between 0 and 100: 50
//Binary value of integer is: 110010