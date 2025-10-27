#include <iostream>
using namespace std;

void printStaircase(int n)
{
    for (int i = 1; i <= n; i++)
        {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '#';
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printStaircase(n);
    return 0;
}
