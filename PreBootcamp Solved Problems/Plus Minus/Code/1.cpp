#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pos=0;
    int neg=0;
    int zero=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    float pos_ratio = (float)pos/n;
    float neg_ratio = (float)neg/n;
    float zero_ratio= (float)zero/n;

    cout<<fixed<<setprecision(6);
    cout<<pos_ratio<<endl;
    cout<<neg_ratio<<endl;
    cout<<zero_ratio<<endl;

    return 0;
}
