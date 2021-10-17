#include<iostream>
using namespace std;
int main()
{
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;
    double n;

    cin>>n;
    int notas = n;
    int moedas = (n - notas) * 100;

    if( (moedas * 1000) % 10 == 9) {
        moedas++;
    }


    n100 = notas/100;
    notas = notas%100;
    n50 = notas/50;
    notas = notas%50;
    n20 = notas/20;
    notas = notas%20;
    n10 = notas/10;
    notas = notas%10;
    n5 = notas/5;
    notas = notas%5;
    n2 = notas/2;
    notas = notas%2;

    m1 = notas/1;
    notas = notas%1;
    m50 = moedas/50;
    moedas = moedas%50;
    m25 = moedas/25;
    moedas = moedas%25;
    m10 = moedas/10;
    moedas = moedas%10;
    m05 = moedas/5;
    moedas = moedas%5;
    m01 = moedas/1;

    cout<<"NOTAS:"<<endl;
    cout<<n100<<" nota(s) de R$ 100.00"<<endl;
    cout<<n50<<" nota(s) de R$ 50.00"<<endl;
    cout<<n20<<" nota(s) de R$ 20.00"<<endl;
    cout<<n10<<" nota(s) de R$ 10.00"<<endl;
    cout<<n5<<" nota(s) de R$ 5.00"<<endl;
    cout<<n2<<" nota(s) de R$ 2.00"<<endl;


    cout<<"MOEDAS:"<<endl;
    cout<<m1<<" moeda(s) de R$ 1.00"<<endl;
    cout<<m50<<" moeda(s) de R$ 0.50"<<endl;
    cout<<m25<<" moeda(s) de R$ 0.25"<<endl;
    cout<<m10<<" moeda(s) de R$ 0.10"<<endl;
    cout<<m05<<" moeda(s) de R$ 0.05"<<endl;
    cout<<m01<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}

















/// WRONG ANSWER
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;

    int m = a;

    double t100, t50, t20, t10, t5, t2, t1;
    t100=t50=t20=t10=t5=t2=t1=0;

    cout<<"NOTAS:"<<endl;
    if(a>=100) {
        while(a>99){
            a-=100;
            t100++;
        }
    }
    cout<<t100<<" nota(s) de R$ 100.00"<<endl;
    //cout<<a<<endl;
    if(a>=50) {
        while(a>49){
            a-=50;
            t50++;
        }
    }
    cout<<t50<<" nota(s) de R$ 50.00"<<endl;
    //cout<<a<<endl;
    if(a>=20) {
        while(a>19){
            a-=20;
            t20++;
        }
    }
    cout<<t20<<" nota(s) de R$ 20.00"<<endl;
    //cout<<a<<endl;
    if(a>=10) {
        while(a>9){
            a-=10;
            t10++;
        }
    }
    cout<<t10<<" nota(s) de R$ 10.00"<<endl;
    //cout<<a<<endl;
    if(a>=5) {
        while(a>2){
            a-=5;
            t5++;
        }
    }
    cout<<t5<<" nota(s) de R$ 5.00"<<endl;
    //cout<<a<<endl;
    if(a>=2) {
        while(a>1){
            a-=2;
            t2++;
        }
    }
    cout<<t2<<" nota(s) de R$ 2.00"<<endl;
    //cout<<a<<endl;
    cout<<"MOEDAS:"<<endl;
    if(a>=1) {
        while(a>=1){
            a-=1;
            t1++;
        }
    }
    cout<<t1<<" moeda(s) de R$ 1.00"<<endl;

    int p50, p25, p10, p05, p01;

     p50=p25=p10=p05=p01=0;
    if(a>=0.50){
        while(a>=0.49){
            a-=0.50;
            p50++;
        }
    }
    if(a>=0.25) {
        while(a>0.10){
            a-=.25;
            p25++;
        }
    }
    if(a>=.10) {
        while(a>.09){
            a-=.10;
            p10++;
        }
    }
    if(a>=0.05) {
        while(a>=0.05){
            a-=0.05;
            p05++;
        }
    }
    if(a>=0.01) {
        while(a>=0.01){
            a-=0.01;
            p01++;
        }
    }

    cout<<p50<<" moeda(s) de R$ 0.50"<<endl;
    cout<<p25<<" moeda(s) de R$ 0.25"<<endl;
    cout<<p10<<" moeda(s) de R$ 0.10"<<endl;
    cout<<p05<<" moeda(s) de R$ 0.05"<<endl;
    cout<<p01<<" moeda(s) de R$ 0.01"<<endl;



    return 0;
}
*/
