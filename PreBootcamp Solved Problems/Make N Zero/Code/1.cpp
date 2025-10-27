#include<iostream>
#define ull unsigned long long
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>> N;
        if(N == 5 || N == 2 || N == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
