#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, h;
    double t;
    cin>>n>>h>>t;

    cout<<"NUMBER = "<<n<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<(t*h)<<endl;
}
