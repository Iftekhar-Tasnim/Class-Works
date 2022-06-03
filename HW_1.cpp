#include <iostream>
using namespace std;

int main() {

    float a,b,c,d,e,r;
    cout<<"This Application Calculates Your Daily Driving Cost"<<endl;


    cout<<"Input Your Total Driven Per Day: ";
    cin>>a;
    cout<<"Input Petrol Perice Per Liter: ";
    cin>>b;
    cout<<"What is your avg. km. per liter? ";
    cin>>c;
    cout<<"Input Your Total Parking fee per day: ";
    cin>>d;
    cout<<"Input Your Total Tolls Per day: ";
    cin>>e;

    r=(a/c)*b+d+e;

    cout<<"Your Daily Total Driving Cost= "<<r;



return 0;
}
