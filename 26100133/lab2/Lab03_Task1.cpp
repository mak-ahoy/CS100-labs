#include <iostream>
using namespace std;

int main(){
    // char c;
    // cout << "Enter a character: ";
    // cin >> c;
    // cout << "ASCII Value of " << c << " is " << int(c);

    const int COST_TRANS = 38000;
    const int COST_ACCO = 7700;
    int stu_num;
    int trip_len;

    cout<<"Enter number of students on the trip: ";
    cin>> stu_num;
    cout<<"Enter total length of the trip in days: ";
    cin>> trip_len;
    cout<<"Cost per Head of the trip: "<< (((trip_len*COST_TRANS)+(trip_len*COST_ACCO*stu_num))/stu_num);

    return 0;
}