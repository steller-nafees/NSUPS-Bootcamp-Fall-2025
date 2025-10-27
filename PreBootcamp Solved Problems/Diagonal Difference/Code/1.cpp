#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    int sum_md=0;
    int sum_ad=0;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_md+=arr[i][j];
            }
            if(j == n-i-1)
            {
                sum_ad+=arr[i][j];
            }
        }
    }
    int diff = sum_ad - sum_md;
    diff = abs(sum_md - sum_ad);
    cout<<diff;
    return 0;
}
