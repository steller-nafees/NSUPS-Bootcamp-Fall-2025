#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int A,B,K;
    cin>>A>>B;
    K=(A+B)/2;
    if((A+B)%2 == 0)
        cout<<K<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
