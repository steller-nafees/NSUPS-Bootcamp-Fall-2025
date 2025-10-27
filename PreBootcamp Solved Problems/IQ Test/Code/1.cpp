#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> evens,odds;

    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2 == 0)
        {
            evens.push_back(i+1);
        }
        else
        {
            odds.push_back(i+1);
        }
    }
    if(evens.size() == 1)
        cout<<evens[0]<<endl;
    else
        cout<<odds[0]<<endl;
    return 0;
}
