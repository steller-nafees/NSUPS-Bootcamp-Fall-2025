//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : String Typing
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025 
//
// Problem Statement:
//   You are given an integer n and a string s consisting of n lowercase letters.
//   Initially, the text editor is empty. You can perform the following actions:
//
//     • Type a single character (takes 1 operation).
//     • Copy the current text and paste it at the end (takes 1 operation).
//
//   You must form the given string s using these operations in the minimum
//   possible number of steps.
//
//   Determine the minimum number of operations required to type the string s.
//
// Input:
//   The first line contains an integer n (1 ≤ n ≤ 1000) — the length of the string.
//   The second line contains the string s of length n, consisting of lowercase letters.
//
// Output:
//   Print a single integer — the minimum number of operations needed.
//
// Constraints:
//   - 1 ≤ n ≤ 1000
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
    INPUT_int(n);
    INPUT_string(s);

    int ans = n; // typing all characters manually

    for(int i = 0; i < n - 1; i++)
    {
        string prefix = s.substr(0, i + 1);
        string next = s.substr(i + 1, i + 1);

        if(prefix == next)
        {
            // operations = type prefix + copy + type remaining characters
            int ops = (i + 1) + 1 + (n - 2 * (i + 1));
            ans = min(ops, ans);
        }
    }
    cout << ans << endl;
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
   - Initially, we assume the string must be typed manually (n operations).
   - However, if a prefix of the string repeats immediately afterward,
     we can optimize by:
       • Typing the prefix once,
       • Copying it (1 operation),
       • Then typing only the remaining characters.
   - For each possible prefix, check if it matches the next substring of equal length.
   - Compute the operations required using that prefix and take the minimum.
   - The answer is the minimum number of operations found.
   - Complexity: O(n²) due to substring comparison.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
