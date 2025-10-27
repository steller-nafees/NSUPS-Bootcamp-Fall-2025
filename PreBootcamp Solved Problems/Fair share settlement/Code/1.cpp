#include<iostream>
using namespace std;
int main()
{
    int T ;
    cin >> T;
    while (T--)
    {
        int N;
        int K;
        cin >> N >> K;

        int fair_share = N / (K+1);

        int net_amount = N - (fair_share * K);
        cout<<net_amount<<endl;
    }
    return 0;
}
