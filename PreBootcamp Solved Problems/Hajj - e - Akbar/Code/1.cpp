#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string str[100];
    int counter = 0;
    while(cin >> str[counter] && str[counter] != "*")
    {
        counter++;
    }
    for(int i=0;i<counter; i++)
    {
        if(str[i] == "Hajj")
        {
            cout<< "Case "<<i+1<<": Hajj-e-Akbar"<<endl;
        }
        else if(str[i] == "Umrah")
        {
            cout<< "Case "<<i+1<<": Hajj-e-Asghar"<<endl;
        }
    }

    return 0;
}
