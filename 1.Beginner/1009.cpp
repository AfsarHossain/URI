#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string s;
    double a, b, bonus;
    cin>>s>>a>>b;

    bonus = (b/100)*15;

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<(a+bonus)<<endl;
}
