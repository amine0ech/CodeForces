/*
https://codeforces.com/contest/266/problem/A
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
    

    int n ; cin >> n ; 
    int ans = 0 ;
    string  s ; cin >>  s ; 
    for(int i = 1 ; i < n ; i++){
        if(s[i] == s[i-1])ans++;
    }
    cout << ans ; 
    return 0 ;
    
}