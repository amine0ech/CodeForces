/*
http://codeforces.com/contest/734/problem/A
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
    
    int n  ; cin >> n ;
    string s ; cin >> s ; 
    int d = 0 , a = 0 ;
    for(int i = 0 ; i < n ; i ++){
        if(s[i] == 'D') d++ ; 
        else a++ ; 
    }
    if(a > d ) cout << "Anton" ; 
    else if (a < d ) cout << "Danik" ; 
    else cout << "Friendship" ;
    return 0; 
    


    
}