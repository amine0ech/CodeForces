/*
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1047
*/


#include <bits/stdc++.h>

using namespace std;


#ifdef LOCAL

#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define isPrime(n) ([&]{int _n=n;if(_n<2)return 0;for(int i=2;i*i<=_n;++i)if(_n%i==0)return 0;return 1;}())


const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, t;
    
    while (cin >> s >> t) {
        reverse(all(s));
        reverse(all(t));
        int n = s.size(), m = t.size();

        vector<int> ans(n + m + 5, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i + j] += (s[i] - '0') * (t[j] - '0');
            }
        }

        int carry = 0;
        for (int i = 0; i < n + m + 5; i++) {
            int x = ans[i] + carry;
            ans[i] = x % 10;
            carry = x / 10;
        }

        while (ans.size() > 1 && ans.back() == 0)
            ans.pop_back();

        reverse(all(ans));

        for (auto el : ans)
            cout << el;
        cout << "\n";
    }
    return 0;
}