#include<bits/stdc++.h>
#define output(n) cout<<n<<endl;
#define input(n) cin>>n;
#define input(a,b,c) cin>>a>>b>>c
#define printr cout<<"right"<<endl
#define printw cout<<"wrong"<<endl


using namespace std;

int main()
{
    int x,y,z;
    while(true)
    {
        input(x,y,z);
        if(x == 0 && y == 0 && z == 0)
        {
            break;
        }
        if((x*x==y*y+z*z) || (y*y==x*x+z*z) || (z*z==x*x+y*y))
        {
            printr;
        }
        else
        {
            printw;
        }
    }
    return 0;
}
