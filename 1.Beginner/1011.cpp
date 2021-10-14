#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int r;
    double a;
    cin>>r;

    a = (4*3.14159*r*r*r)/3;

    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<a<<endl;
}
