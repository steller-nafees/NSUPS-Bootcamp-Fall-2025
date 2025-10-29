//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : Fake News (easy)
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 29, 2025 
//
// Problem Statement:
//   As it's the first of April, Heidi suspects that the news she reads today 
//   might be fake, and she doesn’t want to look silly in front of the other 
//   contestants. She knows that a newspiece is fake if it contains the word 
//   "heidi" as a subsequence. Help Heidi assess whether the given piece is 
//   fake or not.
//
// Input:
//   The first and only line of input contains a single nonempty string s 
//   (1 ≤ |s| ≤ 1000) composed of lowercase Latin letters (a–z).
//
// Output:
//   Print "YES" if the string s contains "heidi" as a subsequence,
//   otherwise print "NO".
//
// Constraints:
//   - 1 ≤ |s| ≤ 1000
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
    INPUT_string(s);
    string target = "heidi";

    bool ok = false;
    int j = 0;
    for(char c : s)
    {
        if(c == target[j])
        {
            j++;
            if(j == (int)target.size()) ok = true;
        }
    }
    cout<<(OUTPUT_CONDITION(ok))<<endl;
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
   - We need to check whether the word "heidi" appears as a subsequence in the given string s.
   - Initialize a pointer j = 0 for the target "heidi".
   - Traverse each character c in s:
       • If c matches target[j], increment j.
       • If j reaches target.length(), "heidi" has been found as a subsequence.
   - Finally, output "YES" if found, otherwise "NO".
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
