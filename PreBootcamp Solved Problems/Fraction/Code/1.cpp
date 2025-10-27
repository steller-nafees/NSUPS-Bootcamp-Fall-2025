#include <bits/stdc++.h>


using namespace std;

void findProperIrreducibleFraction(int n) //Proper Irreducible function means a proper function where numerator and denominator has no common divisor except 1
{
    int a,b,c,d;
    for(int c=1; c<=n/2; c++)//as we are iterating for numerator, and numerator must be within 1 to n/2 as its a proper function
    {
        d=n-c;
        if(__gcd(c,d)==1)
        {
            a=c;
            b=d;
        }
    }
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int n;
    cin >> n;

    findProperIrreducibleFraction(n);

    return 0;
}
