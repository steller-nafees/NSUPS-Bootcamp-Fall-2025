//============================================================================
// Platform      : Bootcamp week 1 Contest
// Problem Title : Digits Sequence (Easy Edition)
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 29, 2025 
//
// Problem Statement:
//   Let's write all the positive integer numbers one after another from 1
//   without any delimiters (i.e., as a single string). The resulting infinite
//   sequence begins as:
//
//       123456789101112131415161718192021222324252627282930313233343536...
//
//   Your task is to determine and print the k-th digit (1-based index)
//   in this sequence.
//
// Input:
//   The first and only line contains an integer k (1 ≤ k ≤ 10000) —
//   the position to process.
//
// Output:
//   Print the k-th digit of the resulting infinite sequence.
//
// Constraints:
//   - 1 ≤ k ≤ 10000
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
    INPUT_ll(n);

    ll length = 1, count = 9, start = 1;

    // find k-th digit
    while(n > length * count)
    {
        n -= length * count; // skip entire block
        length++;            // increase digit length (1, 2, 3, ...)
        count *= 10;         // number of elements in the block (9, 90, 900, ...)
        start *= 10;         // starting number of the block (1, 10, 100, ...)
    }

    // find the actual number containing the k-th digit
    start += (n - 1) / length;

    string s = to_string(start);
    int index = (n - 1) % length;
    cout << s[index] << endl;
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
   - We concatenate all positive integers into an infinite string sequence.
   - Each "block" of numbers contributes a predictable number of digits:
       • 1–9 → 9 × 1 = 9 digits
       • 10–99 → 90 × 2 = 180 digits
       • 100–999 → 900 × 3 = 2700 digits
   - We determine which block the k-th digit belongs to by subtracting the total
     digits of previous blocks.
   - Once the correct block is found:
       • Identify the exact number containing the k-th digit.
       • Convert it to string form.
       • Output the specific digit based on the remainder index.
   - This avoids generating the entire sequence and works efficiently up to k = 10000.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
