#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long N;
        cin>>N;
        string S;
        cin>>S;
        int maxSCR = 0;//maximum colored room
        int color[3] = {0};
        for(int i=0; i<N; i++)//it won't count more inputs then N
        {
            if(S[i] == 'R')
            {
                color[0]++;
                if(color[0] > maxSCR)
                    maxSCR = color[0];
            }
            else if(S[i] == 'G')
            {
                color[1]++;
                if(color[1] > maxSCR)
                    maxSCR = color[1];
            }
            else if(S[i] == 'B')
            {
                color[2]++;
                if(color[2] > maxSCR)
                    maxSCR = color[2];
            }

        }
        cout<<N-maxSCR<<endl;
    }
}
