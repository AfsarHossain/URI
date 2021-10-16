#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int m = a;

    int t100, t50, t20, t10, t5, t2, t1;
    t100=t50=t20=t10=t5=t2=t1=0;

    if(a>=100) {
        while(a>99){
            a-=100;
            t100++;
        }
    }
    if(a>=50) {
        while(a>49){
            a-=50;
            t50++;
        }
    }
    if(a>=20) {
        while(a>19){
            a-=20;
            t20++;
        }
    }
    if(a>=10) {
        while(a>9){
            a-=10;
            t10++;
        }
    }
    if(a>=5) {
        while(a>2){
            a-=5;
            t5++;
        }
    }
    if(a>=2) {
        while(a>1){
            a-=2;
            t2++;
        }
    }
    if(a>=1) {
        while(a>0){
            a-=1;
            t1++;
        }
    }

    cout<<m<<endl;
    cout<<t100<<" nota(s) de R$ 100,00"<<endl;
    cout<<t50<<" nota(s) de R$ 50,00"<<endl;
    cout<<t20<<" nota(s) de R$ 20,00"<<endl;
    cout<<t10<<" nota(s) de R$ 10,00"<<endl;
    cout<<t5<<" nota(s) de R$ 5,00"<<endl;
    cout<<t2<<" nota(s) de R$ 2,00"<<endl;
    cout<<t1<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
