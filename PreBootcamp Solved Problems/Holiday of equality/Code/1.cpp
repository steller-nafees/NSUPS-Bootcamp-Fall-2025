#include<bits/stdc++.h>//it includes every standard library
using namespace std;

int max_exp(int arr[], int n)
{
    int m = arr[0];
    for(int i=0 ; i<n ;i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
        }
    }
    return m;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int max_e = max_exp(arr,n);
    int king_exp = 0;
    for(int i=0;i<n; i++)
    {
        king_exp = king_exp + abs(max_e - arr[i]);
    }
    cout<<king_exp<<endl;


    return 0;
}



//*********************************//
//           Alternative           //
//               way               //
//*********************************//


//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i =0; i<n; i++)
//    {
//        cin>>arr[i];
//    }
//    sort(arr, arr+n);//to avoid extra function to find maximum value.
//    int pay = 0;
//    for(int i=0 ; i<n; i++)
//    {
//        pay = pay + (arr[n-1] - arr[i]);
//    }
//    cout<<pay<<endl;
//    return 0;
//}
