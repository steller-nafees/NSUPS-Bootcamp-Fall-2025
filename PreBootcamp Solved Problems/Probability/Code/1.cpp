#include <bits/stdc++.h>
using namespace std;

void probability(int a,int b)
{
    int countZero = 0;
    int nume=0,denom=0;
    for(int i=a;i<=b;i++)
    {
        int n=i;
        if(n==0)
            countZero++;
        while(n>0)
        {
            if(n%10 == 0)
            {
                countZero++;
                break;
            }
            n/=10;
        }
    }
    nume = countZero;
    denom = b-a + 1;
    cout<<nume<<"/"<<denom<<endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B;
        cin>>A>>B;
        probability(A,B);
    }
    return 0;
}
