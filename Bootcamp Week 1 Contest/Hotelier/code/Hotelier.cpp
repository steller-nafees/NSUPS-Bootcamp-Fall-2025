//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : Hotelier
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025 
//
// Problem Statement:
//   There is a small hotel with 10 rooms, numbered from 0 to 9 from left to right.
//   Initially, all rooms are empty.
//
//   The hotel receives a sequence of events. Each event can be one of the following types:
//     - 'L': a new guest arrives and occupies the leftmost available (empty) room.
//     - 'R': a new guest arrives and occupies the rightmost available (empty) room.
//     - '0'–'9': a guest leaves the room with that number.
//
//   You need to simulate all events and print the final state of the hotel rooms.
//
// Input:
//   The first line contains an integer n (1 ≤ n ≤ 10^5) — the number of events.
//   The second line contains a string s of length n — the sequence of events.
//   Each character of s is either 'L', 'R', or one of the digits '0'–'9'.
//
// Output:
//   Print a string of 10 characters — the final occupancy of all rooms.
//   For each room, print '1' if it is occupied or '0' if it is empty.
//
// Constraints:
//   - 1 ≤ n ≤ 10^5
//   - Time limit: 1 second
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
#define OUTPUT_CONDITION(x) x?"YES" : "NO"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
#define output(a) cout<< a <<endl;
#define vii(a,n,val) vector<int> a(n,val);
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define STR_LEN(s) ((int)s.size())
#define STR_REV(s) reverse(all(s))
#define STR_SORT_ASC(s) sort(all(s))
#define STR_SORT_DESC(s) sort(rall(s))
#define STR_TOLOWER(s) transform(all(s), s.begin(), ::tolower)
#define STR_TOUPPER(s) transform(all(s), s.begin(), ::toupper)
#define STR_CONTAINS(s, sub) (s.find(sub) != string::npos)
#define STR_SUBSTR(s, l, r) (s.substr(l, r))
#define STR_APPEND(s1, s2) s1 += s2
#define STR_STARTS_WITH(s, pref) (s.rfind(pref, 0) == 0)
#define STR_ENDS_WITH(s, suff) (s.size() >= suff.size() && s.compare(s.size() - suff.size(), suff.size(), suff) == 0)
#define STR_SPLIT(vec, s, delim) { string tmp; stringstream ss(s); while (getline(ss, tmp, delim)) vec.pb(tmp); }
#define STR_JOIN(res, vec, delim) { res = ""; for (int i = 0; i < (int)vec.size(); i++) { res += vec[i]; if (i + 1 != (int)vec.size()) res += delim; } }
#define STR_TO_INT(s) stoi(s)
#define STR_TO_LL(s) stoll(s)
#define INT_TO_STR(x) to_string(x)
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
    INPUT_ll(n);
    INPUT_string(s);
    vii(rooms, 10, 0);

    for(char c : s)
    {
        if(c == 'L')
        {
            for(int i=0; i<10; i++)
            {
                if(rooms[i] == 0)
                {
                    rooms[i] = 1;
                    break;
                }
            }
        }
        else if(c == 'R')
        {
            for(int i = 9; i >= 0; i--)
            {
                if(rooms[i] == 0)
                {
                    rooms[i] = 1;
                    break;
                }
            }
        }
        else
        {
            int number = c - '0';
            rooms[number] = 0;
        }
    }

    for(int i=0; i<10; i++)
    {
        cout << rooms[i];
    }
    cout << endl;
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
   💡 Solution Logic:
   - Initialize an array of 10 integers (rooms), all set to 0 (empty).
   - Traverse each event in the input string:
       • If 'L' → occupy the leftmost available room (first 0 from left).
       • If 'R' → occupy the rightmost available room (first 0 from right).
       • If '0'–'9' → free the corresponding room (mark as 0).
   - After processing all events, print the final occupancy of all 10 rooms
     as a binary string (1 = occupied, 0 = empty).
   - The simulation ensures O(n) time complexity for n events.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
