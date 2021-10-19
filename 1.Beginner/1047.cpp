#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, diff;
    cin>>a>>b>>c>>d;

    diff = ((c*60+d) - (a*60+b));

    if(diff<=0)
        diff += 24*60;
    cout<<"O JOGO DUROU "<<diff/60<<" HORA(S) E "<<diff%60<<" MINUTO(S)"<<endl;

    return 0;
}
