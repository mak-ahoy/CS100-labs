#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std; 


int main(){

    double x_A;
    double y_A;

    double x_B;
    double y_B;

    double x_C;
    double y_C;


    double vol;
    double s_area;
    double h;
    double s;
    double r;


    cout<<"Please enter x coordinate of a"<<endl;
    cin>>x_A;
    cout<<"Please enter y coordinate of a"<<endl;
    cin>>y_A;
    cout<<"Please enter x coordinate of b"<<endl;
    cin>>x_B;
    cout<<"Please enter y coordinate of b"<<endl;
    cin>>y_B;
    cout<<"Please enter x coordinate of c"<<endl;
    cin>>x_C;
    cout<<"Please enter y coordinate of c"<<endl;
    cin>>y_C;


    r= sqrt(pow((x_A-x_B),2)+pow((y_A-y_B),2));
    h= sqrt(pow(((x_C-x_B)),2)+pow((y_C-y_B),2));
    s= sqrt(pow(((x_A-x_C)),2)+pow((y_A-y_C),2));
    vol=(M_PI*r*r*h)/3;
    s_area= (M_PI*r*r)+(M_PI*r*s);


    cout<<"The radius is: "<<fixed<<setprecision(2)<<r<<" units"<<endl;
    cout<<"The height is: "<<fixed<<setprecision(2)<<h<<" units"<<endl;
    cout<<"The slant height is: "<<fixed<<setprecision(2)<<s<<" units"<<endl;
    cout<<"The volume of the cone is: "<<fixed<<setprecision(2)<<vol<<" units"<<endl;
    cout<<"The surface area of te cone is: "<<fixed<<setprecision(2)<<s_area<<" units"<<endl;

    return 0;

}