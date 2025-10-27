#include<iostream>
using namespace std;
int main()
{
    long N;
    cin>>N;
    long d;
    long rn = 0;
    while(N!=0)
    {
        d = N % 10;
        rn = rn * 10 + d;
        N /= 10;
    }
    cout<<rn;
    return 0;
}
