//============================================================================
// Platform      : Codeforces 
// Problem Title : Deque
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025 
//
// Problem Statement:
//   Double ended queue or Deque (part of C++ STL) are sequence containers with
//   dynamic sizes that can be expanded or contracted on both ends (either its
//   front or its back). Given a set of arrays of size N and an integer K, you
//   have to find the maximum integer for each and every contiguous subarray of
//   size K for each of the given arrays.
//
// Input:
//   The first line of input contains the number of test cases T. For each test
//   case, the first line contains two integers N and K — the size of the array
//   and the size of the subarray. The next line contains N integers Ai — the
//   elements of the array.
//
// Output:
//   For each test case, print N-K+1 integers, the maximum of each contiguous
//   subarray of size K, separated by spaces.
//
// Constraints:
//   - 1 ≤ T ≤ 10^3
//   - 1 ≤ N ≤ 10^4
//   - 1 ≤ K ≤ N
//   - 1 ≤ Ai ≤ 10^4
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
    INPUT_int(K);
    vi(A,N);
    INPUT_ARRAY(A,N);

    deque<int> dq;
    for (int i = 0; i < N; i++)
    {
        while(!dq.empty() && dq.front() <= i - K )
        {
            dq.pop_front();
        }
        while(!dq.empty() && A[i] >= A[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if( i >= K - 1)
        {
            cout<< A[dq.front()] << " ";
        }

    }
    cout<<endl;
    
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
   - Use a deque to maintain indices of elements in the current sliding window of size K.
   - For each new element A[i]:
       1. Remove indices from the front if they are out of the current window (i-K).
       2. Remove indices from the back whose corresponding values are less than or equal to A[i].
       3. Push the current index i to the back of the deque.
   - Once the first K elements are processed, the front of the deque always contains
     the index of the maximum element in the current window.
   - Print A[dq.front()] for each window of size K.
   - Repeat for all test cases.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
