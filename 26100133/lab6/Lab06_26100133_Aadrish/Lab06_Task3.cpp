#include <iostream>
using namespace std;

int main(){
int min_1;
int hour_1;
int min_2;
int hour_2;
int time_1;
int time_2;

cout<<"Enter time 1:";
cin>>time_1;
cout<<"Enter time 2:";
cin>>time_2;

        min_1=time_1%100;
        hour_1=time_1/100;

        min_2=time_2%100;
        hour_2=time_2/100;

        int d_hours =hour_2-hour_1;
        int d_mins =min_2-min_1;

        if (d_mins<0){
            d_mins=d_mins+60;
            d_hours=d_hours-1;
        }

if ((min_1>=0 && min_1<60) && (hour_1>=0 && hour_1<=24)) {
if ((min_2>=0 && min_2<60) && (hour_2>=0 && hour_2<=24))
    {
        cout<<"Time Difference: "<<d_hours<<" Hours and "<<d_mins<<" minutes";
    }

    else{
        cout<<"Wrong Time 2 entered";
    }
}
else{
    cout<<"Wrong Time 1 entered";
    
}


    
return 0;
}