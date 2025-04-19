/*
https://codeforces.com/contest/677/problem/A
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
    
    
    string s, t  ; 
    cin >> s >> t  ; 
    for(int i = 0 ; i < sza(s) ; i++) {
        int a = tolower(s[i]) , b = tolower(t[i]) ;
        if(a > b) {
            cout << "1" ; return 0 ;
        }
        if(a < b){
            cout << "-1" ; return 0 ;
        }
    }
    cout << "0" ; 
    return 0;
}