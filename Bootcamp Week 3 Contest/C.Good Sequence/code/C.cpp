//============================================================================
// Platform      : Bootcamp Week 3 Contest
// Problem Title : C.Good Sequence
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 22, 2025 
//
// Problem Statement:
//   You are given a sequence of N positive integers a1, a2, ..., aN.
//   You must remove the minimum number of elements so that the remaining
//   sequence becomes a "good sequence".
//
//   A sequence b is good if for every value x in b,
//       x appears exactly x times in b.
//
//   Examples of good sequences:
//       (3,3,3)
//       (4,2,4,1,4,2,4)
//       ()
//
//   Examples of not-good sequences:
//       (3,3,3,3)
//       (2,4,1,4,2)
//
//   Your task: output the minimum number of elements to remove.
//
// Input:
//   N
//   a1 a2 … aN
//
// Output:
//   Minimum number of elements to remove.
//
// Constraints:
//   • 1 ≤ N ≤ 100000
//   • 1 ≤ ai ≤ 1e9
//   • Time limit: 2 seconds
//   • Memory limit: 256 MB
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
#define MIN_HEAP(pq) priority_queue<int, vector<int>, greater<int>>pq;
#define MAX_HEAP(pq) priority_queue<int>pq;
#define PQ_INPUT(pq) for(int i = 0; i<n; i++){INPUT_int(x);pq.push(x);}
#define PQ_SUM(pq,sum) ll sum = 0;while(!pq.empty()){sum += pq.top();pq.pop();}
#define Output_precision(pr,res) cout << fixed << setprecision(pr) << res << endl;
#define uo_map(a,keytype, valuetype) unordered_map<keytype,valuetype> a;
#define umap_input(a,n,dtype) for(int i = 0; i<n; i++){dtype x; cin>>x; a[x]++;}
#define umap_freqCount(a, freq) for(auto x : a){freq[x]++;}
#define SET(s,dType)set<dType>s
#define INSERT(s, x) s.insert(x)
#define EXISTS(s, x) (s.find(x) != s.end())
#define SIZE(s)(int)s.size()
#define CLEAR(s)s.clear()
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
    INPUT_int(N)

    vector<ll> a(N);
    INPUT_ARRAY(a, N)

    
    uo_map(freq, ll, ll);
    for (int i = 0; i < N; i++) freq[a[i]]++;

    ll remC = 0;

    for (auto &p : freq)
    {
        ll x = p.first;
        ll f = p.second;

        if (f < x)
            remC += f;         
        else
            remC += (f - x); //difference of x & f which we want to remove 
    }

    output(remC)
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
  - Count how many times each value appears.
  - For each value x:
       • If freq[x] < x  → cannot satisfy “x must appear x times”.
         → remove all freq[x].
       • If freq[x] ≥ x  → keep x occurrences and remove the rest.
  - Sum all removed elements and print.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
