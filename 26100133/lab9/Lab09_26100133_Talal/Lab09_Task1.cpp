#include<iostream>
#include<cmath>
using namespace std;

double myst(int a , int b , int c, int d)  // distance culculation between points
    {
    int d1 = a - c ;   // difference of x coordinates  
    int d2 = b - d;   // difference in y coordinates 
    return sqrt(pow(d1,2)*1.0+pow(d2,2)*1.0) ;    // calculates the distance between two points on a grid. **1.0 multiplyed to get double value
    }

bool rt(double a, double b, double c){  // checks if the 
    double a2 = pow(a,2);    
    double b2 = pow(b,2);
    double c2 = pow(c,2);
    if((a2==0) || (b2==0)|| (c2==0)){   // checks if the lenght between 2 points is 0 ** is not a triangle. 
    return false;
    }
    if ((a2 == b2+c2) || (b2 == a2+c2) || (c2 = a2+b2)){   // checking if it a right triangle using pythogras. . 
    return true; // return 1 if true
}
return false;
}

int main(){
    int x_1,x_2,x_3,y_1,y_2,y_3;  //input  $ output
    cout<<"\n\nEnter x_1: ";
    cin>>x_1;
    cout<<"Enter y_1: ";
    cin>>y_1;
    cout<<"Enter x_2: ";
    cin>>x_2;
    cout<<"Enter y_2: ";
    cin>>y_2;
    cout<<"Enter x_3: ";
    cin>>x_3;
    cout<<"Enter y_3: ";
    cin>>y_3;
    double l1,l2,l3;
    l1 = myst(x_1,y_1,x_2,y_2);   // calculatiing length betwee the points
    l2 = myst(x_1,y_1,x_3,y_3);  // calculatiing length betwee the points
    l3 = myst(x_3,y_3,x_2,y_2);  // calculatiing length betwee the points
    cout<<"\n\n"<<rt(l1,l2,l3);   // checking if right triangle using maths rule of right angle triangle.
return 0;
}


//output_1
// Enter x_1: 0
// Enter y_1: 0
// Enter x_2: 0
// Enter y_2: 0
// Enter x_3: 0
// Enter y_3: 0


// 0
//**********************************************************
//Output2
// Enter x_1: 4   
// Enter y_1: 34
// Enter x_2: 22
// Enter y_2: 42
// Enter x_3: 53
// Enter y_3: 24


// 1