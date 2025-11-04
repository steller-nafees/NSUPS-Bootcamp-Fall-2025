//============================================================================
// Platform      : Bootcamp Week 2 Contest
// Problem Title : 1176A. Divide it
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : November 04, 2025 
//
// Problem Statement:
//   You are given an integer n. You can perform any of the following operations
//   on this number an arbitrary (possibly zero) number of times:
//
//     • Replace n with n / 2 if n is divisible by 2
//     • Replace n with (2 * n) / 3 if n is divisible by 3
//     • Replace n with (4 * n) / 5 if n is divisible by 5
//
//   Your task is to find the minimum number of moves required to obtain 1 from n,
//   or say that it is impossible to do so.
//
// Input:
//   The first line of input contains an integer q (1 ≤ q ≤ 1000) — the number of queries.
//   The next q lines each contain one integer n (1 ≤ n ≤ 10^18).
//
// Output:
//   For each query, print the minimum number of moves required to obtain 1.
//   If it is impossible, print -1.
//
// Constraints:
//   - 1 ≤ q ≤ 1000
//   - 1 ≤ n ≤ 10^18
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
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
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

void solve() {
    long long n;
    cin >> n;
    
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }

    int moves = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
            moves++;
        }
        else if (n % 3 == 0) {
            n = (2 * n) / 3;
            moves++;
        }
        else if (n % 5 == 0) {
            n = (4 * n) / 5;
            moves++;
        }
        else {
            cout << -1 << "\n";
            return;
        }
    }

    cout << moves << "\n";
}


int main()
{
    FAST_IO;

    int t; cin>>t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
   💡 Solution Logic:
   - For each given n, repeatedly apply the allowed transformations until n = 1 or no further moves are possible.
   - Each operation effectively divides n by one of 2, 3/2, or 5/4.
   - Prefer integer divisions in the order of availability:
       • If divisible by 2 → n = n / 2
       • Else if divisible by 3 → n = (2 * n) / 3
       • Else if divisible by 5 → n = (4 * n) / 5
   - Count each operation as one move.
   - If at any point n cannot be divided by 2, 3, or 5, output -1 (impossible).
   - Output the total move count when n becomes 1.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/