#include<iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    int relative = v1 - v2;
    if(relative == 0)
    {
        return(x1 == x2)?"YES" : "NO";
    }
    int initial = x2 - x1;
    if(initial%relative == 0 && initial/relative >= 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<kangaroo(x1,v1,x2,v2)<<endl;
    return 0;
}
