#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x1, x2, y1, y2, a, x, y, z;
    cin>>x1>>y1>>x2>>y2;

    x = x2 - x1;
    y = y2 - y1;
    a =  sqrt(x*x + y*y);

    cout<<fixed<<setprecision(4);
    cout<<a<<endl;
    return 0;
}
