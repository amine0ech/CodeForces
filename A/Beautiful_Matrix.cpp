/*
http://codeforces.com/contest/263/problem/A
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


    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j <= 5 ; j++){
            int k ; cin >> k ; 
            if(k != 0) {
                cout << abs(3 - i) + abs(3 - j)  ; 
                return 0 ;
            }
        }
    }
    return 0 ;
    


    
}