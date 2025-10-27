#include<iostream>
#include<string>
#include<string.h>
using namespace std;

//Declaring structure to store stringPairs
typedef struct
{
    string firstLine;
    string secondLine;
}SloganPair;

int main()
{
    int N,Q;
    cin>>N;
    cin.ignore();//Clear input buffer
    SloganPair S[N];//array of structures to store string pairs

    for(int i=0; i<N; i++)
    {
        getline(cin,S[i].firstLine);//similar as fgets() in C
        getline(cin,S[i].secondLine);
    }

    cin>>Q;
    cin.ignore();

    while(Q--)
    {
        string sloganFL;
        getline(cin,sloganFL);

        for(int i=0; i<N; i++)
        {
            if(sloganFL == S[i].firstLine)//as string is a variable type in C++, check it as usual. don't need strcmp()
            {
                cout<<S[i].secondLine<<endl;
            }
        }
    }
    return 0;
}
