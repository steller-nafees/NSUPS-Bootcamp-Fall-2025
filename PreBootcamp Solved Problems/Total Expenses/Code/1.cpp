#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int quantity,price;
        cin>>quantity>>price;
        double TotalExp = (double)(quantity * price);
        cout<<fixed<<setprecision(6);
        if(quantity > 1000)
        {
            cout<<(TotalExp = TotalExp - (TotalExp * 0.1))<<endl;
        }
        else
        {
            cout<<TotalExp<<endl;
        }
    }
    return 0;

}
