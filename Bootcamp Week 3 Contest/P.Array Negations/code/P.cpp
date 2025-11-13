//============================================================================
// Platform      : Codeforces 
// Problem Title : 102152I. Array Negations
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 13, 2025 
//
// Problem Statement:
// You are given an array a of n integers, and an integer k. You have to make exactly k 
// negation operations: in each operation, choose an element ai from the array and replace it with −ai.
//
// Your task is to maximize the sum of the array after performing exactly k negation operations.
//
// Input:
// - First line: integer T (1 ≤ T ≤ 100), the number of test cases.
// - For each test case:
//   - First line: integers n and k (1 ≤ n ≤ 10^4, 0 ≤ k ≤ 10^4).
//   - Second line: n integers a1, a2, ..., an (-100 ≤ ai ≤ 100), the elements of the array.
//
// Output:
// - For each test case, print a single integer: the maximum sum of the array after k negations.
//
// Constraints:
// - Time limit per test: 1.5 seconds
// - Memory limit per test: 256 MB
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
    INPUT_int(n);
    INPUT_int(k);

    MIN_HEAP(pq);
    PQ_INPUT(pq);

    while(k--)
    {
        int v = pq.top();
        pq.pop();
        pq.push(-v);
    }

    PQ_SUM(pq,sum);

    cout<<sum<<endl;

    
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
  - To maximize the sum after k negations:

1. Always flip the smallest element (most negative) available, because negating a negative increases the sum the most.
2. Use a min-heap (priority queue) to efficiently access the smallest element.
3. For each of the k operations:
   - Pop the smallest element from the heap.
   - Negate it.
   - Push it back into the heap.
4. After k operations, sum all elements in the heap to get the maximum sum.

- Optimization notes:
  - If k is larger than n, the smallest element may be flipped multiple times.
  - If k operations are left and the smallest element is zero, further flips won't reduce the sum.
  - Complexity: O(n + k*log n) per test case, which is efficient given n ≤ 10^4 and k ≤ 10^4.

*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
