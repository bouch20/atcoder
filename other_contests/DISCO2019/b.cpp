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
// #include <cstdlib>
// #include <stdlib.h>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)
typedef long long ll;
typedef pair<int, int> P;

int main(int argc, const char * argv[]) {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n){
    cin >> a[i];
  }
  ll right = accumulate(a.begin(), a.end(), 0LL);
  ll left = 0;
  int index = 0;
  rep(i, n){
    right -= a[i];
    left += a[i];
    if (right - left ==  0){
      cout << 0 << endl;
      return 0;
    }

    if (right - left < 0){
      index = i;
      break;
    }
  }
  // cout << right << endl;
  // cout << left << endl;
  // cout << right - left << endl;
  // cout << (right + a[index]) - (left -a[index]) << endl;
  long long ans1 = min(abs(left - right), abs(right - left));
  long long ans2 = min(abs((right + a[index]) - (left -a[index])), abs((left -a[index]) - (right + a[index])));
  cout << min(ans1, ans2) << endl;
  return 0;
}
