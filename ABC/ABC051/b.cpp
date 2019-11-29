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

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)
typedef long long ll;
typedef pair<int, int> P;

int main(int argc, const char * argv[]) {
  int k, s;
  cin >> k >> s;
  long ans = 0;
  rep(i, k+1){
    rep(j, k+1){
      if ( 0 <= s-i-j & s-i-j <=k) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
