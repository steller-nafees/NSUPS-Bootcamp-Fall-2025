//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : Delete from the Left
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025
//
// Problem Statement:
// You are given two strings s and t. In a single move, you can delete the
// first character of either string. Determine the minimum number of moves
// required to make the two strings equal.
//
// Input:
// - First line: string s
// - Second line: string t
//
// Output:
// - Minimum number of moves required to make s and t equal.
//
// Constraints:
// - 1 ≤ |s|, |t| ≤ 2⋅10^5
// - Strings contain only lowercase Latin letters
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
    INPUT_string(s);
    INPUT_string(t);

    //last index
    int i = s.size() - 1;
    int j = t.size() - 1;
    int common = 0;

    while(i >= 0 && j >= 0 && s[i] == t[j])
    {
        common++;
        i--; j--;
    }
    int moves = (s.size() - common) + (t.size() - common);
    cout<<moves<<endl;

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

1. Observe that deleting characters from the left is equivalent to preserving
   the longest common suffix of the two strings.

2. Start comparing characters from the end of both strings:
   - Count the number of matching characters (`common`).

3. The minimum moves required:
   moves = (length of s not in common) + (length of t not in common)
         = (s.size() - common) + (t.size() - common)

4. This ensures we remove only the necessary characters from the left
   to make the strings equal.

5. Time Complexity: O(min(|s|, |t|))
   Space Complexity: O(1)
*/


/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
