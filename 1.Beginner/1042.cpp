#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ara1[4], ara2[4];
    for(int i=0; i<3; i++){
        cin>>ara1[i];
        ara2[i] = ara1[i];
    }

    sort(ara1, ara1+3);
    for(int i=0; i<3; i++){
        cout<<ara1[i]<<endl;
    }

    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<ara2[i]<<endl;
    }

}
