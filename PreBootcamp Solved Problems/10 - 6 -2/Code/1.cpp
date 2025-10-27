#include<bits/stdc++.h>


const double pi = acos(-1);
using namespace std;

void solve()
{
    const double pi = acos(-1);
    double l;
    cin>>l;
    double w = l * 6.0/10.0;//width = 60%
    double r = l * 2.0/10.0;//radius = 20%
    double area_R = pi * r * r;
    double area_G = (l * w) - area_R;
    cout<<area_R<<" "<<area_G<<endl;
}
int main()
{
    cout<<fixed<<setprecision(2);
    int t;
    cin>>t;
    double l;
    while(t--)
    {
        solve();
    }
    return 0;
}
