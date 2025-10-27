//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : CamelCase
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 27, 2025 
//
// Problem Statement:
//   There is a sequence of words in CamelCase as a string of letters `s`,
//   having the following properties:
//
//   • It is a concatenation of one or more words consisting of English letters.
//   • All letters in the first word are lowercase.
//   • For each of the subsequent words, the first letter is uppercase and the
//     rest of the letters are lowercase.
//
//   Given the string `s`, determine the number of words in it.
//
// Example:
//   s = "oneTwoThree"
//   There are 3 words in the string: "one", "Two", "Three".
//
// Function Description:
//   Complete the camelcase function.
//
//   camelcase has the following parameter(s):
//     string s: the string to analyze
//
//   Returns:
//     int: the number of words in s.
//
// Input Format:
//   A single line containing string s.
//
// Constraints:
//   1 ≤ length of s ≤ 10^5
//
// Output:
//   Print the number of words in the CamelCase string.
//
// Time Limit: 1 second
// Memory Limit: 256 MB
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

int camelcase(string s)
{
    int count = 1;
    for (char c : s) {
        if (isupper(c)) count++;
    }
    return count;
}

int main()
{
    FAST_IO;

    INPUT_string(s);
    cout << camelcase(s) << endl;

    return 0;
}

/*
   💡 Solution Logic:
   - The string `s` represents a sequence of words joined in CamelCase.
   - The first word is all lowercase.
   - Every new word begins with an uppercase letter.
   - Initialize count = 1 (for the first word).
   - For each character in the string:
       • If the character is uppercase, increment count.
   - Return the total count of words.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
