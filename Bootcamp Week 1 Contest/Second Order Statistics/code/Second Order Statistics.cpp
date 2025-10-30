//============================================================================
// Platform      : Codeforces 
// Problem Title : A - Second Order Statistics
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025 
//
// Problem Statement:
//   Once Bob needed to find the second order statistics of a sequence of
//   integer numbers. Let's choose each number from the sequence exactly once
//   and sort them. The value on the second position is the second order
//   statistics of the given sequence. In other words, it is the smallest
//   element strictly greater than the minimum. Help Bob solve this problem.
//
// Input:
//   The first input line contains integer n (1 ≤ n ≤ 100) — the number of
//   elements in the sequence.
//   The second line contains n space-separated integers — the elements of the
//   sequence. These numbers don't exceed 100 in absolute value.
//
// Output:
//   If the given sequence has the second order statistics, output this order
//   statistic. Otherwise, output "NO".
//
// Constraints:
//   - 1 ≤ n ≤ 100
//   - |ai| ≤ 100
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
    INPUT_int(n);
    vi(a,n);

    INPUT_ARRAY(a,n);

    SORT_ASC(a);

    int smallest = a[0];
    int result = -101;
    bool found = false;

    for(int x : a)
    {
        if(x > smallest)
        {
            result = x;
            found = true;
            break;
        }
    }
    if(found)
    {
        output(result);
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
   - Read integer n and an array of n elements.
   - Sort the array in ascending order.
   - Identify the smallest element (minimum) in the array.
   - Traverse the sorted array to find the first element strictly greater than the minimum.
   - If found, print that element (the second order statistic).
   - If all elements are equal (no larger element exists), print "NO".
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
