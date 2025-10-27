#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    int A[N];
    int countInt = 0;
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<N; i++)
    {
        if(A[i] % K == 0)
        {
            countInt++;
        }
    }
    cout<<countInt<<endl;
    return 0;
}
