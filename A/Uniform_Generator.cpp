

/*
https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=349
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
    
    
    int step , mod ; 
    while(cin >> step >> mod )
    {
        unordered_set<int> s; 
        int seed = 0 ; 

        
        while (! s.count(seed))
        {
            s.insert(seed) ; 
            seed = (seed + step) % mod ; 
        }

        




        string result = (s.size() == mod) ? "Good Choice" : "Bad Choice";


        cout << setw(10) << step;


        cout << setw(10) << mod;


        cout << "    " << result << endl;

        cout << endl; 
        
    }
    


    return 0 ; 
}