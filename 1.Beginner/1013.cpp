#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[3];
    for(int i=0; i<3; i++) {
        cin>>a[i];
    }
    int max = a[0];

    for(int i=1; i<3; i++) {
        if(max<a[i]) {
            max = a[i];
        }
    }

    cout<<max<<" eh o maior"<<endl;
    return 0;
}
