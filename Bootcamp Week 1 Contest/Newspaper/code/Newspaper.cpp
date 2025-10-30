//============================================================================
// Platform      : Bootcamp Week 1 Contest
// Problem Title : Newspaper
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 30, 2025 
//
// Problem Statement:
//   News agency pays money for articles according to some rules. Each character
//   has its own value (some characters may have value equal to zero). Author gets
//   his payment as a sum of all character’s values in the article. You have to
//   determine the amount of money that news agency must pay to an author.
//
// Input:
//   The first line contains integer N (0 < N ≤ 5), the number of tests. Each test
//   describes an integer K (0 < K ≤ 100), the number of paid characters. On the
//   next K lines there is a table of paid characters and their values (in cents).
//   If a character cannot be found in the table, its value is 0. Next, there is
//   an integer M (0 < M ≤ 150000). Next M lines contain the article itself. Each
//   line can be up to 10000 characters long.
//
// Output:
//   For each test, print how much money the publisher must pay for the article in
//   the format ‘x.yy$’, where x is dollars and yy is cents (always two digits).
//
// Constraints:
//   - 0 < N ≤ 5
//   - 0 < K ≤ 100
//   - 0 < M ≤ 150000
//   - Article line length ≤ 10000 characters
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

void solve() {
    int K;
    cin >> K;

    int value[256] = {0}; // ASCII table

    for (int i = 0; i < K; i++) {
        char ch;
        int val;
        cin >> ws;     // ignore whitespace before character
        cin.get(ch);   // read the character (including space or punctuation)
        cin >> val;    // read its value (in cents)
        value[(unsigned char)ch] = val;
    }

    int M;
    cin >> M;
    cin.ignore(); // ignore newline before reading article lines

    ll totalAmount = 0;
    string line;

    for (int i = 0; i < M; i++) 
    {
        getline(cin, line);
        for (unsigned char ch : line) 
        {
            totalAmount += value[ch];
        }
    }

    cout << fixed << setprecision(2) << totalAmount / 100.0 << "$" << endl;
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
   - Read the number of paid characters K and store their values in an array of size 256 (ASCII table).
   - For each character in the article lines, sum up its value (default 0 if not in the table).
   - For each test case, read M lines of the article and compute the total amount in cents.
   - Convert the total cents to dollars and cents format with two decimal places and print.
   - Repeat for all N test cases.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
