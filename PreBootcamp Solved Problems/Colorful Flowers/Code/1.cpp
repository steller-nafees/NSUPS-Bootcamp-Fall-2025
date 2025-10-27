#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while(scanf("%d%d%d", &a,&b,&c) != EOF)//mostly used input system for multiple line input without limit in CP
    {
        double s = (a+b+c)/2.0;//semi-perimeter  of triangle
        double area_V = sqrt(s*(s-a)*(s-b)*(s-c));//Heron's Formula for the area calculation
        double r = (area_V * 2.0)/(2.0*s);//inscribed circle radius
        double area_R = r*r*acos(-1);//inscribed circle area
        double R = a*b*c/(4.0*area_V);//Circumscribed Circle Radius
        double area_Y = R*R*acos(-1) - area_V;//circumscribed circle area
        area_V -= area_R;//violate area

        cout<<fixed<<setprecision(4);//for 4 place after decimal
        cout<<area_Y<<" "<<area_V<<" "<<area_R<<endl;
    }
    return 0;

}
