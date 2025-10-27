#include<iostream>
#define ull unsigned long long
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ull fact = 1;
        int N;
        cin>>N;
        for(int i=2 ; i<=N; i++)
        {
            fact*=i;
        }
        cout<<fact<<endl;
    }

    return 0;
}
