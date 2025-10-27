//============================================================================
// Platform      : NSU PS Bootcamp Week 1 Contest 
// Problem Title : B - Strings
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 27, 2025 
//
// Problem Statement:
//   You are given two strings, a and b, separated by a new line. Each string 
//   consists of lower case Latin characters ('a'-'z').
//
// Input:
//   Two strings a and b, each on a separate line.
//
// Output:
//   1. Print two space-separated integers, representing the length of a and b.
//   2. Print the string produced by concatenating a and b.
//   3. Print two strings separated by a space: a' and b', which are the same 
//      as a and b respectively, except their first characters are swapped.
//
// Constraints:
//   - 1 ≤ |a|, |b| ≤ 100
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
#define INPUT_int(n) int n; cin>>n;
#define INPUT_ll(n) ll n; cin>>n;
#define INPUT_string(s) string s; cin>>s;
#define INPUT_char(c) char c; cin>>c;
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
    INPUT_string(a);
    INPUT_string(b);

    int len_a = STR_LEN(a);
    int len_b = STR_LEN(b);

    string newA = "", newB = "", concat = "" ;

    // Swap first characters
    newA += (b[0] + a.substr(1, len_a - 1)) ; 
    newB += (a[0] + b.substr(1, len_b - 1)) ;
    
    // Concatenate a and b
    concat = a + b ;

    // Output
    cout << len_a << " " << len_b << endl;
    cout << concat << endl;
    cout << newA << " " << newB << endl;
}

int main()
{
    FAST_IO;

    // For single test case
    solve();

    return 0;
}

/*
  💡 Solution Logic:
  - Read the two input strings a and b.
  - Compute their lengths and print them.
  - Concatenate a and b, then print the result.
  - Swap the first characters of a and b to create new strings newA and newB.
  - Print newA and newB separated by a space.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
