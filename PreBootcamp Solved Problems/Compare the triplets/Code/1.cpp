#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[3];
    int b[3];

    int alice_point=0;
    int bob_point=0;
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<3; i++)
    {
        if(a[i] > b[i])
        {
            alice_point+=1;
        }
        else if(a[i] < b[i])
        {
            bob_point+=1;
        }
        else
        {
            continue;
        }
    }
    cout<<alice_point<<" "<<bob_point<<endl;
    return 0;
}
