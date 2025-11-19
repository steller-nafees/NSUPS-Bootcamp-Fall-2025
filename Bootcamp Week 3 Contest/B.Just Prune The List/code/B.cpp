//============================================================================
// Platform      : Bootcamp Week 3 Contest
// Problem Title : B. Just Prune The List
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 19, 2025 
//
// Problem Statement:
//   You are given two lists of integers. You are allowed to remove any number of
//   elements from either list. Your goal is to make both lists contain the exact
//   same multiset of elements (order does not matter).
//
//   Example:
//      List #1: 1 2 3 2 1
//      List #2: 1 2 5 2 3
//   Removing 1 from List #1 and 5 from List #2 results in:
//      List #1: 1 2 3 2
//      List #2: 1 2 2 3
//   Both lists now contain the same elements.
//
//   You must compute the **minimum** number of elements to remove so that both
//   lists contain the same multiset.
//
// Input:
//   The first line contains T (T ≤ 100), the number of test cases.
//   For each test case:
//     - A line with two integers N and M (1 ≤ N, M ≤ 10000)
//     - A line with N integers (first list)
//     - A line with M integers (second list)
//   All integers are 32-bit signed.
//
// Output:
//   For each test case, output a single integer — the minimum number of elements
//   that must be removed.
//
// Constraints:
//   - 1 ≤ N, M ≤ 10000
//   - Total elements across all tests ≤ 10⁶
//   - T ≤ 100
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
#define MIN_HEAP(pq) priority_queue<int, vector<int>, greater<int>>pq;
#define MAX_HEAP(pq) priority_queue<int>pq;
#define PQ_INPUT(pq) for(int i = 0; i<n; i++){INPUT_int(x);pq.push(x);}
#define PQ_SUM(pq,sum) ll sum = 0;while(!pq.empty()){sum += pq.top();pq.pop();}
#define Output_precision(pr,res) cout << fixed << setprecision(pr) << res << endl;
#define uo_map(a,keytype, valuetype) unordered_map<keytype,valuetype> a;
#define umap_input(a,n,dtype) for(int i = 0; i<n; i++){dtype x; cin>>x; a[x]++;}
#define umap_freqCount(a, freq) for(auto x : a){freq[x]++;}
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
    INPUT_int(N);
    INPUT_int(M);

    vi(a,N);
    INPUT_ARRAY(a,N);
    vi(b,M);
    INPUT_ARRAY(b,M);

    uo_map(freqA, int, int );
    uo_map(freqB, int, int );
    umap_freqCount(a,freqA);
    umap_freqCount(b,freqB);

    int common = 0;

    for(auto it : freqA)
    {
        int val = it.first;
        if(freqB.count(val))
        {
            common += min(freqA[val], freqB[val]);
        }
    }
    int ans = (N - common) + (M - common);
    output(ans);
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
   Solution Logic:
   - The goal is to make both lists contain the same multiset of elements.
   - Count frequency of each number in both lists using two hash maps.
   - For every value appearing in the first list:
        * If it appears in the second list, the number of common occurrences
          is the minimum of the two frequencies.
   - Total elements that must remain = common occurrences.
   - Elements to be removed:
        * From list A: N - common
        * From list B: M - common
   - Total removals = (N - common) + (M - common)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
