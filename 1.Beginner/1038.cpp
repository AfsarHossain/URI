#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;

    cout<<fixed;
    cout<<setprecision(2);
    if(X==1){
        cout<<"Total: R$ "<<(Y*4.00)<<endl;
    }else if(X==2){
        cout<<"Total: R$ "<<(Y*4.50)<<endl;
    }else if(X==3) {
        cout<<"Total: R$ "<<(Y*5.00)<<endl;
    } else if(X==4) {
        cout<<"Total: R$ "<<(Y*2.00)<<endl;
    } else if(X==5) {
        cout<<"Total: R$ "<<(Y*1.50)<<endl;
    }

    return 0;
}
