/*
https://codeforces.com/contest/228/problem/A
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

    unordered_set<int> s ; 
    int k = 4 ; 
    while(k--){
        int x ;cin  >> x; s.insert(x) ; 
    }
    cout << 4 - s.size() ; 
    return 0 ;  
    
    
    


    
}