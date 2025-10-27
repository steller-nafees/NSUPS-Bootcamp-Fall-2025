#include <iostream>
#include<ctype.h>
using namespace std;


int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        char ID;
        cin>>ID;
        ID = tolower(ID);
        if(ID == 'b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(ID == 'c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(ID == 'd')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(ID == 'f')
        {
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}
