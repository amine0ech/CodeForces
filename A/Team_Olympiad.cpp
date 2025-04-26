

/*
https://codeforces.com/contest/490/problem/A
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
    
    vector<vector<int>> v(4) ; 

    int n ; cin >> n ; 
    
    for(int i = 1 ; i <= n ; i++)
    {
        int x ; cin >>  x; 
        v[x].push_back(i) ;

    }
    

    int ans = min(v[3].size() , min(v[1].size() , v[2].size())) ; 

    cout << ans << endl ; 
    for(int i = 0 ; i < ans ; i++){
        cout << v[1][i] << " " ;
        cout << v[2][i] << " " ;
        cout << v[3][i] << endl ;

    }
    return 0 ; 


    
}