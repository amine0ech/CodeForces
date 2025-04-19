/*
https://codeforces.com/contest/431/problem/A
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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<int> v(5) ; 
    for(int i=1 ; i<=4 ; i++) {
        cin >>  v[i] ; 
    }    
    string s ; cin >> s  ; 
    ll ans = 0; 
    for(int i = 0 ; i < s.size() ; i++){
        ans += v[s[i] - '0'] ; 
    }
    cout << ans << "\n" ;
    return 0 ;
   
}