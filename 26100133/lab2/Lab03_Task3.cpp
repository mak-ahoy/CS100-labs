#include <iostream>
using namespace std;

int main() {

string grade_mech;
int marks_mech;
string grade_comp;
int marks_comp;
string grade_cal;
int marks_cal;

cout<<"";
cout<< "Enter Grade for Machanics ";
cin>>grade_mech;
cout<< "Enter Marks obtained in Machanics ";
cin>>marks_mech;
cout<< "Enter Grade for Computational Problem Solving ";
cin>>grade_comp;
cout<< "Enter Marks obtained in Computational Problem Solving ";
cin>>marks_comp;
cout<< "Enter Grade for Calculus ";
cin>>grade_cal;
cout<< "Enter Marks obtained in Calculus ";
cin>>marks_cal;
cout<<"  "<<endl;
cout<<"------------------Report Card Fall 2022------------------"<<endl;
cout<<"  "<<endl;
cout<<"Course:                                   Grade:            Marks:"<<endl;
cout<<"  ";
cout<<"Mechanics                                  "<<grade_mech<<"                 "<<marks_mech<<endl;
cout<<"  ";
cout<<"Computational Problem Solving              "<<grade_comp<<"                 "<<marks_comp<<endl;
cout<<"  ";
cout<<"Calculus                                   "<<grade_cal<<"                 "<<marks_cal<<endl;


return 0;


}