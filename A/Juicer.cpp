
/*
https://codeforces.com/contest/709/problem/A
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
    

    int n , b, d  ; cin >> n >> b >> d; 
    int ans = 0 ; 
    
    int waste = 0 ; 

    while(n--){
        int x ; cin >> x ; 
        if(x <= b){
            waste += x ; 
            if(waste > d){
                ans++; waste = 0;
            }
        }
    }


    cout << ans  ; 
    
    

    return 0  ; 
    
}