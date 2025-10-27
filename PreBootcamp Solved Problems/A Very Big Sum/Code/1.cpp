#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum += ar[i];

    }
    cout<<sum<<endl;
    return 0;
}
