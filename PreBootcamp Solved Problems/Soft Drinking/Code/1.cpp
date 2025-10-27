#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int max_drink = (k * l) / nl;
    int max_lime  = c * d;
    int max_salt  = p / np;
    int toast = min({max_drink, max_lime, max_salt}) / n;
    cout << toast << endl;
    return 0;
}
