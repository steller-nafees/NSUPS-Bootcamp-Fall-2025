#include <iostream>
#include<algorithm>
using namespace std;

void minisum(int arr[])
{
    sort(arr,arr+5);//to sort array in ascending order

    long long min_Sum=0, max_Sum=0;
    for(int i=0; i<4; i++)
    {
        min_Sum += arr[i];//to store first 4 elements
        max_Sum += arr[i+1];//to store last 4 elements
    }

    cout<<min_Sum<<" "<<max_Sum;
}

int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    minisum(arr);
    return 0;
}
