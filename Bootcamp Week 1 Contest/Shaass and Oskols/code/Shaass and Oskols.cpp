//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : 294A. Shaass and Oskols
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025
//
// Problem Statement:
// There are n parallel wires, each with some birds (oskols) sitting on them. 
// When a bird is shot, all birds to its left jump to the upper wire (if any) 
// and all birds to its right jump to the lower wire (if any). Given the initial 
// number of birds on each wire and a sequence of shots, determine the number of 
// birds on each wire after all shots.
//
// Input:
// - First line: integer n, the number of wires
// - Second line: n integers a1, a2, ..., an (number of birds on each wire)
// - Third line: integer m, number of shots
// - Next m lines: two integers xi yi each, meaning the yi-th bird on xi-th wire is shot
//
// Output:
// - n lines, each containing the number of birds on the corresponding wire 
//   after all shots
//
// Constraints:
// - 1 ≤ n ≤ 100
// - 0 ≤ ai ≤ 100
// - 0 ≤ m ≤ 100
// - 1 ≤ xi ≤ n, 1 ≤ yi ≤ ai (at the moment of the shot)
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
#define OUTPUT_ARRAY(a,n) for (int i = 0; i < n; i++) cout << a[i] << endl;
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
    INPUT_int(n);
    vi(a,n);
    INPUT_ARRAY(a,n);

    INPUT_int(m);

    for(int i=0; i<m; i++)
    {
        INPUT_int(wire);
        INPUT_int(birdPos);

        wire -= 1;    // convert to 0-based
        birdPos -= 1; // convert to 0-based

        int left = birdPos;
        int right = a[wire] - birdPos - 1;

        if(wire > 0) a[wire - 1] += left;
        if(wire < n - 1) a[wire + 1] += right;

        a[wire] = 0; // shoot bird 
    }

    OUTPUT_ARRAY(a,n);
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

1. Represent each wire as an integer indicating the number of birds sitting on it.

2. For each shot:
   a. Convert the wire index and bird position to 0-based indexing.
   b. Determine:
      - Number of birds to the left of the shot (left = birdPos)
      - Number of birds to the right of the shot (right = a[wire] - birdPos - 1)
   c. Update neighboring wires:
      - If there is an upper wire (wire > 0), add the left birds to it
      - If there is a lower wire (wire < n-1), add the right birds to it
   d. Remove the shot bird by setting a[wire] = 0

3. After processing all shots, print the final number of birds on each wire.

4. Time Complexity: O(m) with O(1) operations per shot, efficient for n,m ≤ 100.
   Space Complexity: O(n)
*/


/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
