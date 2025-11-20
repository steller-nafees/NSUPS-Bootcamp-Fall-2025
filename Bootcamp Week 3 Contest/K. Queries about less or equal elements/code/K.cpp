//============================================================================
// Platform      : Codeforces 
// Problem Title : K. Queries about less or equal elements
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : November 21, 2025 
//
// Problem Statement:
//   You are given two arrays of integers a and b. For each element of the second 
//   array b[j], find the number of elements in array a that are less than or 
//   equal to b[j].
//
// Input:
//   - The first line contains two integers n, m (1 ≤ n, m ≤ 2·10^5) — the sizes of 
//     arrays a and b.
//   - The second line contains n integers a[i] (-10^9 ≤ a[i] ≤ 10^9).
//   - The third line contains m integers b[j] (-10^9 ≤ b[j] ≤ 10^9).
//
// Output:
//   - Print m integers separated by spaces: the j-th integer is the number of 
//     elements in array a that are ≤ b[j].
//
// Constraints:
//   - 1 ≤ n, m ≤ 2·10^5
//   - -10^9 ≤ a[i], b[j] ≤ 10^9
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
#define output(a) cout << a << endl;
#define SORT_ASC(a) sort(a.begin(), a.end());
#define all(x) (x).begin(), (x).end()
#define INPUT_ll(n) long long n; cin >> n;

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
    INPUT_ll(n)
    INPUT_ll(m)

    vector<ll> a(n), b(m);
    INPUT_ARRAY(a, n)
    INPUT_ARRAY(b, m)

    SORT_ASC(a);

    for (int i = 0; i < m; i++)
    {
        int count = upper_bound(all(a), b[i]) - a.begin();
        cout << count << " ";
    }
    cout << endl;
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
  - Sort array a in ascending order.
  - For each element b[j] in array b, use upper_bound to find the first element in 
    a greater than b[j]. The index of this element is the count of elements ≤ b[j].
  - Output these counts in order.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
