/**
 * 
 * http://codeforces.com/contest/59/problem/A
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
    
    string s ; cin >> s ; 
    int u = 0 , l = 0  ; 
    for(char c : s) {
        if(islower(c))l++ ; 
        else u++ ;
    }
    if(u>l) for(auto &c : s) c= toupper(c ) ; 
    else for(auto &c : s)c=tolower(c )  ; 
    cout << s ;
    
    
    return 0; 

    
}