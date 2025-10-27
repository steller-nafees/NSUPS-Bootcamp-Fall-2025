#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    char c1,c2;
    cin>>h1>>c1>>m1;
    cin>>h2>>c2>>m2;

    int h3 = h1 * 60 + m1;
    int h4 = h2 * 60 + m2;
    int t = (h3+h4)/2;//mid time in minutes
    int newH = t/60;//taking integer part as hour
    int newM = t%60;//reminder under 60 as min
    cout<<setw(2)<<setfill('0')<<newH<<":"<<setw(2)<<setfill('0')<<newM<<endl;

    return 0;
}
