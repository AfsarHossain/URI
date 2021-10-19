#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a, b, c, ans;
    cin>>a>>b>>c;

    cout<<fixed;
    cout<<setprecision(1);
    if((a+b)>c && (b+c)>a && (a+c)>b) {
        cout<<"Perimetro = "<<(a+b+c)<<endl;
    } else {
        cout<<"Area = "<<.5*(a+b)*c<<endl;
    }
}
