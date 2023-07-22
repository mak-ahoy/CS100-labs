#include <iostream>
#include <string>
using namespace std;

// structs are useful for defining user defined data types meaning you can you define a variable that can have data of different types including interger sting and eetc. it is also used to keep data of differnt types at one place
struct student   
{
    string name;  
    int roll_number;
    string major;
    int get_roll()
    {
        return roll_number;  
    }
    void display()  //contains 2 functions within struct one displays the the current value of struct variables the second if a getter method to get / print roll number. 
    {
        cout << "name " << name;
        cout << "\nRoll Number " << roll_number;
        cout << "\nMajor " << major;
    }
};
int main()
{
    struct student p1;  // declaration of a struct of type student and declaring varibale as p1
    p1.name = "Talal";  //setting name as Talal
    p1.roll_number = 23100176;// setting the rollnumebr varivble in struct
    p1.major = "computer Science"; // setting the major varivble in struct
    p1.display();  // displays the varibaLE values
    return 0;
}


