#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    string inputs[t];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            inputs[i] = "<";
        }
        else if(a>b)
        {
            inputs[i] = ">";
        }
        else
        {
            inputs[i] = "=";
        }
    }
    for(int i=0; i<t; i++)
    {
        cout<<inputs[i]<<endl;
    }
    return 0;
}
