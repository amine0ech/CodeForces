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
#define isPrime(n) ([&] {int _n=n;if(_n<2)return 0;for(int i=2;i*i<=_n;++i)if(_n%i==0)return 0;return 1; }())

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;




// Segment Tree for Sum (can be used as Template )
int getMid(int s, int e) { return s + (e - s) / 2; }

int getSumUtil(vector<int> &st, int ss, int se, int qs, int qe, int si) {
    if (qs <= ss && qe >= se) return st[si];
    if (se < qs || ss > qe) return 0;
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2 * si + 1) + getSumUtil(st, mid + 1, se, qs, qe, 2 * si + 2);
}

void updateValueUtil(vector<int> &st, int ss, int se, int i, int diff, int si) {
    if (i < ss || i > se) return;
    st[si] += diff;
    if (se != ss) {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2 * si + 1);
        updateValueUtil(st, mid + 1, se, i, diff, 2 * si + 2);
    }
}

void updateValue(vector<int> &arr, vector<int> &st, int n, int i, int new_val) {
    if (i < 0 || i > n - 1) {
        cout << "Invalid Input";
        return;
    }
    int diff = new_val - arr[i];
    arr[i] = new_val;
    updateValueUtil(st, 0, n - 1, i, diff, 0);
}

int getSum(vector<int> &st, int n, int qs, int qe) {
    if (qs < 0 || qe > n - 1 || qs > qe) {
        cout << "Invalid Input";
        return -1;
    }
    return getSumUtil(st, 0, n - 1, qs, qe, 0);
}

int constructSTUtil(vector<int> &arr, int ss, int se, vector<int> &st, int si) {
    if (ss == se) {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] = constructSTUtil(arr, ss, mid, st, si * 2 + 1) + constructSTUtil(arr, mid + 1, se, st, si * 2 + 2);
    return st[si];
}

vector<int> constructST(vector<int> &arr, int n) {
    int x = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, x) - 1;
    vector<int> st(max_size);
    constructSTUtil(arr, 0, n - 1, st, 0);
    return st;
}
// end of segment Tree 


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int n = arr.size();
    vector<int> st = constructST(arr, n);
    cout << "Sum of values in given range = " << getSum(st, n, 1, 3) << endl;
    updateValue(arr, st, n, 1, 10);
    cout << "Updated sum of values in given range = " << getSum(st, n, 1, 3) << endl;

    return 0;
}
