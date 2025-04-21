/*
http://codeforces.com/contest/732/problem/A
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

    int price , deno ; 
    cin >> price >> deno ; 
    if(price % 10 == 0) {
        cout << 1 ; return 0 ; 
    }

    for(int i =1 ; i <= 9 ; i++){
        if(price * i  % 10 == deno || price * i % 10 == 0){
            cout << i ; 
            return 0 ; 
        }
    }

    cout << 10 ; 


    return 0;    
}