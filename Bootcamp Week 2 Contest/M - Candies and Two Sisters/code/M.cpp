//============================================================================
// Platform      : Codeforces 
// Problem Title : 1335A - Candies and Two Sisters
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 08, 2025 
//
// Problem Statement:
//   There are two sisters, Alice and Betty. You have n candies. You want to
//   distribute these n candies between the two sisters such that:
//
//     - Alice gets a (a > 0) candies.
//     - Betty gets b (b > 0) candies.
//     - Both get integer numbers of candies.
//     - Alice gets more candies than Betty (a > b).
//     - All candies are distributed (a + b = n).
//
//   Find the number of possible ways to distribute exactly n candies following
//   the above conditions.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 10⁴) — the number of test cases.
//   Each of the next t lines contains one integer n (1 ≤ n ≤ 2×10⁹).
//
// Output:
//   For each test case, print the number of valid distributions. If no valid
//   distribution exists, print 0.
//
// Constraints:
//   - 1 ≤ t ≤ 10⁴
//   - 1 ≤ n ≤ 2×10⁹
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

void solve()
{
    INPUT_ll(n);

    // Number of valid distributions = floor((n - 1) / 2)
    ll result = (n - 1) / 2;

    output(result);
}

int main()
{
    FAST_IO;

    int t; 
    cin >> t; 
    while (t--) solve();
    
    // For single test case, comment the above 3 lines and uncomment below line
    // solve();

    return 0;
}

/*
   💡 Solution Logic:
   - We need to find pairs (a, b) of positive integers such that:
         a + b = n  and  a > b.
   - Let b = x ⇒ a = n - x.
     Condition a > b ⇒ n - x > x ⇒ x < n / 2.
   - Therefore, the number of integer values for x is floor((n - 1) / 2).
   - This formula automatically gives 0 when n ≤ 2.
   - Hence, answer = (n - 1) / 2.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
