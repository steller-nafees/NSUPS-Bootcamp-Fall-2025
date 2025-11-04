//============================================================================
// Platform      : Bootcamp Week 2 Contest
// Problem Title : Bear and Big Brother
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering 
// Date          : November 05, 2025 
//
// Problem Statement:
//   Bear Limak wants to become the largest of bears, or at least to become
//   larger than his brother Bob.
//
//   Right now, Limak and Bob weigh a and b respectively. It's guaranteed that
//   Limak's weight is smaller than or equal to his brother's weight.
//
//   Limak eats a lot and his weight is tripled after every year, while Bob's
//   weight is doubled after every year.
//
//   After how many full years will Limak become strictly larger (strictly
//   heavier) than Bob?
//
// Input:
//   The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) —
//   the weight of Limak and the weight of Bob respectively.
//
// Output:
//   Print one integer, denoting the number of years after which Limak will
//   become strictly larger than Bob.
//
// Constraints:
//   - 1 ≤ a ≤ b ≤ 10
//   - Time limit: 1 second
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
    int a,b;
    cin >> a >> b;
    int years;

    for(years = 0; ; years++)
    {
        if(a <= b)
        {
            a *= 3;
            b *= 2;
        }
        else
        {
            break;
        }
    }

    output(years);
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
   - We are given Limak’s and Bob’s initial weights (a and b).
   - Each year, Limak’s weight triples (a *= 3) and Bob’s doubles (b *= 2).
   - Using a loop:
       - While Limak’s weight ≤ Bob’s, multiply accordingly.
       - Count how many years until Limak > Bob.
   - Output the number of years required.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
