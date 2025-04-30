/**
 * 
 * https://codeforces.com/contest/567/problem/A
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

using ll = long long ; 

int main() {
    
    int n ; cin >> n ; 
    vector<ll> nums(n) ; 
    for(int i = 0  ; i < n ; i++) cin >> nums[i] ; 

    for(int i = 0 ; i <n ; i++)
    {
        
        if(i == 0) cout << abs(nums[1] - nums[0] )  << " " << abs(nums[n-1]-  nums[0]) << endl ; 
        else if(i == n-1) cout <<  abs(nums[n-2] - nums[n-1] )  << " " << abs(nums[n-1]-  nums[0]) << endl ;
        else cout << min(abs(nums[i] - nums[i-1]) , abs(nums[i] - nums[i+1])) << " " << max(abs(nums[i] - nums[0]) , abs(nums[i] - nums[n-1])) << endl ; 

    }
    

    return 0;
}
