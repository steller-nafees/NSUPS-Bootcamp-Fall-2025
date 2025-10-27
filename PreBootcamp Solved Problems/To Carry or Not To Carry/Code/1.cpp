/*The addition showing in the question is
following XOR operations. So output
will be XOR of two inputs*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2;
    while(cin>>num1>>num2)
    {
        cout<<(num1 ^ num2)<<endl;
    }
    return 0;
}

