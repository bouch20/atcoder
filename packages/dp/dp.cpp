#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <utility>
#include <sstream>
#include <numeric>
#include <iterator>
#include <map>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)
typedef long long ll;
typedef pair<int, int> P;

// int rec(int i, int j){
//     int res;
//     if(i == n){
//         res = 0;
//     }else if(j < w[i]){
//         res = rec(i + 1, j);
//     }else{
//         res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
//     }
//     return res;
// }

struct NapSackDP {
    int n;
    vector<int> v, w;
    NapSackDP(int _n, vector<int> _v, vector<int> _w) : n(_n), v(_v), w(_w){}
    int rec(int i, int j){
        int res;
        if(i == n){
            res = 0;
        }else if(j < w[i]){
            res = rec(i + 1, j);
        }else{
            res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
        }
        return res;
    }
};

int main(){
    int n;
    cin >> n;

    vector<int> v(n), w(n);
    
    rep(i, n) cin >> v[i] >> w[i];
    cout << v[0] << endl;
    // rep(i, n) cin >> w[i];
    // NapSackDP dp(n, v, w);
    return 0;
}