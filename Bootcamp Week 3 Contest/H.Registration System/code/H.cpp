//============================================================================
// Platform      : Codeforces 
// Problem Title : H.Registration System
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 20, 2025 
//
// Problem Statement:
//   A new e-mail service "Berlandesk" is going to be opened in Berland. The system
//   should work on the following principle:
//
//   Each time a new user wants to register, they send a request with their name. If
//   such a name does not exist in the system database, it is inserted and the user
//   gets "OK". If the name already exists, the system suggests a new name by appending
//   the smallest number i ≥ 1 so that namei does not exist, and inserts it into the database.
//
// Input:
//   - The first line contains an integer n (1 ≤ n ≤ 10^5), the number of requests.
//   - Each of the next n lines contains a request, a non-empty string of at most 32
//     lowercase Latin letters.
//
// Output:
//   - Print n lines. For each request, print "OK" if the name was successfully registered,
//     or the suggested new name if the original name was already taken.
//
// Constraints:
//   - 1 ≤ n ≤ 10^5
//   - Each name contains only lowercase Latin letters and has length ≤ 32
//   - Time limit: 2 seconds
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define output(a) cout << a << endl;
#define uo_map(a,keytype, valuetype) unordered_map<keytype,valuetype> a;
#define INPUT_int(n) int n; cin >> n;
#define INPUT_string(s) string s; cin >> s;

// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve()
{
    INPUT_int(n);
    uo_map(database, string, int);

    for (int i = 0; i < n; i++)
    {
        INPUT_string(name);
        if (database.find(name) == database.end())
        {
            output("OK")
            database[name] = 1;
        }
        else
        {
            string newName = name + to_string(database[name]);
            output(newName)
            database[name]++;
            database[newName] = 1;
        }
    }
}

int main()
{
    FAST_IO;

    //int t; cin>>t; 
    //while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    solve();

    return 0;
}

/*
   Solution Logic:
  - Maintain a map of all registered names and their counts.
  - For each request:
      - If the name does not exist, output "OK" and add it to the map.
      - If it exists, append the current count to the name to form a new unique name,
        output the new name, and update the counts in the map.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
