//============================================================================
// Platform      : Codeforces 
// Problem Title : J.Espionage
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 22, 2025 
//
// Problem Statement:
//   Marcos built an espionage agency and assigned spies to spy on people.
//   However, some spies may be spying on other spies, which is not allowed.
//   For each test case, you are given N persons (numbered arbitrarily) and R
//   spy relationships. Each relationship R1 R2 means: "R1 spies on R2".
//
//   Your task is to determine if **any spy is spying on another spy**.
//   If ALL targets are civilians (i.e., no one being spied on is also spying
//   on someone), output “spying”. Otherwise, output “spied”.
//
// Input:
//   - The first line contains T, the number of test cases.
//   - For each test case:
//        • Two integers N and R
//        • Followed by R lines, each containing two integers R1 and R2
//          meaning “R1 spies on R2”.
//
// Output:
//   - For each test case, print:
//         Scenario #i: spying     → if no spy spies another spy
//         Scenario #i: spied      → otherwise
//
// Constraints:
//   - 1 ≤ T ≤ 1000
//   - 1 ≤ N ≤ 10^5 per test case
//   - 0 ≤ R ≤ 10^5
//   - Sum of N and R across all test cases fits time limits
//   - Time limit: 2 seconds
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
    INPUT_int(R)

    SET(spies, int);
    SET(targets, int);

    for(int i = 0; i < R; i++)
    {
        INPUT_int(R1)
        INPUT_int(R2)

        INSERT(spies, R1);
        INSERT(targets, R2);
    }


    bool bad = false;

    for(int x : targets)
    {
        if(EXISTS(spies, x))
        {
            bad = true;
            break;
        }
    }

    static int scenario = 1;
    cout << "Scenario #" << scenario++ << ": ";

    if(bad) output("spied")
    else output("spying")
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
  - For each test case:
      - Read N and R.
      - Track all spies (people who appear as R1).
      - Track all targets (people who appear as R2).
      - If any target also appears as a spy → a spy is spying another spy.
      - If no intersection between spies and targets → output “spying”.
      - Otherwise → output “spied”.
  - Print result in format:
         Scenario #i: spying
         or
         Scenario #i: spied
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
