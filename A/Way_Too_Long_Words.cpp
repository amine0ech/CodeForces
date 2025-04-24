

/*
https://codeforces.com/contest/71/problem/A
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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    
    int n ; 
    cin >> n;
    while (n--)
    {
        string s ; cin >> s ; 
        if(s.size() <= 10) {
            cout << s << endl;
        }
        else{
            cout << s[0] << s.size() - 2 << s.back() << endl;
        }
    }
    
    return 0 ; 
}