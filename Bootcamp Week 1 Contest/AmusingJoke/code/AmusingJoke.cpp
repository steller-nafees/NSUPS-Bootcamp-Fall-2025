//============================================================================
// Platform      : Codeforces
// Problem Title : 141A - Amusing Joke
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 28, 2025
//
// Problem Statement:
//   After a New Year celebration, the letters from the guest's name and host's 
//   name are collected in a pile. Verify whether the pile can be rearranged to 
//   form exactly the guest's and host's names combined, with no extra letters 
//   and no missing letters.
//
// Input:
//   - Three lines:
//       1. Guest's name (uppercase letters, non-empty, ≤100 characters)
//       2. Host's name (uppercase letters, non-empty, ≤100 characters)
//       3. Letters in the pile (uppercase letters, non-empty, ≤100 characters)
//
// Output:
//   - Print "YES" if the letters in the pile can be permuted to form the guest's 
//     and host's names combined. Otherwise, print "NO".
//
// Constraints:
//   - All lines consist only of uppercase Latin letters.
//   - Length of each line does not exceed 100.
//   - Time limit: 2 seconds
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
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
    string guest, host, pile;
    cin >> guest >> host >> pile;

    int freq1[26] = {0};
    int freq2[26] = {0};

    // Count frequency of guest + host
    for(char c : guest) freq1[c - 'A']++;
    for(char c : host)  freq1[c - 'A']++;

    // Count frequency of pile
    for(char c : pile)  freq2[c - 'A']++;

    // Compare the two frequency arrays
    bool flag = true;
    for(int i = 0; i < 26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            flag = false;
            break;
        }
    }

    cout << (OUTPUT_CONDITION(flag)) << endl;
}

int main()
{
    FAST_IO;

    //int t; cin >> t;
    //while(t--) solve();

    // For single test case
    solve();

    return 0;
}

/*
   Solution Logic:
  - Count the frequency of each uppercase letter in guest + host combined.
  - Count the frequency of each uppercase letter in the pile.
  - Compare the two frequency arrays.
  - If all counts match, print "YES"; else, print "NO".
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
