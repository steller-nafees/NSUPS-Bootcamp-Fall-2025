#include<bits/stdc++.h>
#define output(n) cout<<n<<endl;
#define input(n) cin>>n;
using namespace std;

int main()
{
    int N;
    input(N);
    int pg[7];
    for(int i=0; i<7 ; i++)
    {
        input(pg[i]);
    }
    int readPage = 0;
    int i=0;
    while(1)
    {
        readPage+= pg[i];
        if(readPage>=N)
        {
            output(i+1);
            break;
        }
        i++;
        if(i>6)
            i=0;//As I will be updating... So when i becomes 7 we will make it zero so that it restart from 1 to read left pages
    }
    return 0;
}

//alternative but time consuming as it has nested loop
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int N;
//    cin>>N;
//    int pgad[7];
//    for(int i=0; i<7 ; i++)
//    {
//        cin>>pgad[i];
//    }
//    int totalPage = 0;
//    while(1)
//    {
//        for(int i=0;i<7;i++)
//        {
//            totalPage+=pgad[i];
//            if(totalPage == N)
//            {
//                cout<<i+1<<endl;
//                return 0;
//            }
//        }
//        continue;// To run the loop again and again until it hits the condition
//    }
//    return 0;
//}

