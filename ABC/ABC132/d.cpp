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

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
// #define ll long long
typedef long long ll;
typedef pair<int, int> P;

// std::vector<std::vector<long long>> v(n + 1,std::vector<long long>(n + 1, 0));

std::vector<std::vector<long>> v(2019,std::vector<long>(2019, 0));

long mod = 1000000007;

long nCr(long n, long r) {
  if (v[n][r] != 0 ){
    return v[n][r];
  }

  return v[n][r] = (nCr(n-1,r-1) + nCr(n-1,r)) % mod;
}



int main(int argc, const char * argv[]) {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= n; i++) {
      v[i][0] = 1;
      v[i][i] = 1;
    }

    repd(i,1,k+1){
      
      if ( (n-k+1) < i ){
        cout << 0 << endl;
        continue;
      }
      ll ans = nCr(n-k+1, i) * nCr(k-1, i-1);
      cout << ans % mod << endl;
    }

    return 0;
}
