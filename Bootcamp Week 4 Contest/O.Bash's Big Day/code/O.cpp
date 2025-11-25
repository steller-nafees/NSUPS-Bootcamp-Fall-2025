//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Bash's Big Day
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 25, 2025 
//
// Problem Statement:
//   Bash is allowed to take any number of Pokémon from Professor Zulu's lab.
//   However, any group of k > 1 Pokémon with strengths {s1, s2, ..., sk} will
//   start fighting if gcd(s1, s2, ..., sk) = 1.
//
//   Bash wants to take the maximum number of Pokémon such that they do NOT fight,
//   meaning the gcd of all selected Pokémon must be >= 2.
//
// Input:
//   The first line contains an integer n (1 ≤ n ≤ 100000).
//   The second line contains n integers s_i (1 ≤ s_i ≤ 100000).
//
// Output:
//   Print a single integer — the maximum number of Pokémon Bash can take.
//
// Constraints:
//   - Time limit: 2 seconds
//   - Memory limit: 512 MB
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
#define umap_input(a,n,dtype) for(int i = 0; i<n; i++){dtype x; cin>>x; a[x]++; }
#define umap_freqCount(a, freq) for(auto x : a){freq[x]++; }
#define SET(s,dType)set<dType>s
#define INSERT(s, x) s.insert(x)
#define EXISTS(s, x) (s.find(x) != s.end())
#define SIZE(s)(int)s.size()
#define CLEAR(s)s.clear()
using ll = long long;
using ull = unsigned long long;

// Debug
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

vector<bool> sieve(int n) 
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) 
    {
        if (isPrime[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

void solve()
{
    int max_V = 100000; 

    INPUT_int(n);
    vector<int> count(max_V + 1, 0);

    for(int i = 0; i<n; i++)
    {
        INPUT_int(x);
        count[x]++;
    }

    int ans = 1;

    for(int i=2; i<=max_V; i++)
    {
        int total = 0; 
        for(int j = i ; j<= max_V; j += i)
        {
            total += count[j];
        }
        ans = max(ans, total);
    }

    output(ans);
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

/*
   Solution Logic:
  - Pokémon fight if the gcd of their strengths is 1. So Bash wants a subset
    of Pokémon whose gcd ≥ 2.
  - Instead of checking subsets, observe that if we choose all Pokémon that are
    divisible by some integer d ≥ 2, then their gcd is at least d.
  - For each possible divisor i from 2 to 100000:
        count how many strengths are multiples of i.
  - The best answer is the maximum such count.
  - If no divisor ≥ 2 works, answer is 1 (Bash can take at least one Pokémon).
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
