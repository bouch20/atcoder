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

ll permutation(ll n, ll r){
  if (n == 1){
    return 0;
  }
  if (r == 1) {
    return n;
  }
  return n + permutation(n-1, r);
}


int main(int argc, const char * argv[]) {
  int n, a, b;
  cin >> n >> a >> b;
  if(a == b){
    cout << 1 << endl;
    return 0;
  }
  if (b - a < 0){
    cout << 0 << endl;
    return 0;
  }
  if (n==2 & a != b){
    cout << 1 << endl;
  }
  if (n < 2){
    cout << 0 << endl;
    return 0;
  }
  ll n_type = b-a + 1;
  long long max_r = n-2;
  cout << b*max_r - a*max_r + 1 << endl;
  return 0;
}
