#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int p1, p2, u1, u2;
    double pri1, pri2;

    cin>>p1>>u1>>pri1>>p2>>u2>>pri2;

    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<((u1*pri1)+(u2*pri2))<<endl;

}
