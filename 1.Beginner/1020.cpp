#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int y, m, d;
    y=d=m=0;

    if(n>=365) {
        while(n>364) {
            n -= 365;
            y++;
        }
    }
    if(n>=30) {
        while(n>29) {
            n -= 30;
            m++;
        }
    }

    cout<<y<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<n<<" dia(s)"<<endl;

    return 0;
}
