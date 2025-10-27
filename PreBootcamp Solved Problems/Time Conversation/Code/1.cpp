#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ampm = s.substr(8, 2);
    int hh = stoi(s.substr(0, 2));
    int mm = stoi(s.substr(3, 2));
    int ss = stoi(s.substr(6, 2));

    if (ampm == "AM") {
        if (hh == 12) hh = 0;
    } else { // PM
        if (hh != 12) hh += 12;
    }

    cout << setfill('0') << setw(2) << hh << ":"
         << setw(2) << mm << ":"
         << setw(2) << ss << endl;

    return 0;
}
