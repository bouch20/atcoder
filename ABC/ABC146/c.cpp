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


ll search(ll max_n, ll min_n, ll a, ll b, ll x){
  ll mean_n = (max_n + min_n) / 2;
  ll res = a*mean_n + b*to_string(mean_n).size();
  cout << mean_n << endl;
  if(res == x) return mean_n;
  if(res < x) return search(mean_n, min_n, a, b, x);
  if(res > x) return search(max_n, mean_n, a, b, x);
}

int main(int argc, const char * argv[]) {
  ll a, b, x;
  cin >> a >> b >> x;
  long long max_n = 1000000000;
  if (a*max_n + b*to_string(max_n).size() <= x){
    cout << max_n << endl;
    return 0;
  }
  if (a*1 + b*to_string(1).size() > x){
    cout << 1 << endl;
    return 0;
  }
  cout << search(max_n, 0, a, b, x) << endl;


  return 0;
}
