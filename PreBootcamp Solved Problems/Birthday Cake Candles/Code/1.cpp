#include <iostream>
using namespace std;

int birthdayCakeCandles(int candles[], int n)
{
    int tallest_Candles = 0;
    int tall_Candle = candles[0];
    for(int i=0 ; i<n; i++)
    {
        if(candles[i]>tall_Candle)
        {
            tall_Candle = candles[i];
        }
    }
    //Counting tallest candles
    for(int i=0;i < n ; i++)
    {
        if(candles[i] == tall_Candle)
        {
            tallest_Candles++;
        }
    }
    return tallest_Candles;
}

int main()
{
    int n;
    cin>>n;
    int candles[n];
    for(int i=0; i<n; i++)
    {
        cin>>candles[i];
    }
    int tallestCandles = birthdayCakeCandles(candles, n);
    cout<<tallestCandles;
    return 0;
}
