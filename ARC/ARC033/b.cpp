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
  int na, nb;
  cin >> na >> nb;
  vector<bool> a(1e+9 +1, false);
  double and_sum = 0;
  double or_sum = na;
  rep(i,na){
    int a_i;
    cin >> a_i;
    a[a_i] = true;
  }
  rep(i, nb){
    int b_i;
    cin >> b_i;
    if (a[b_i]){
      and_sum++;
    }else{
      or_sum++;
    }
  }
  // cout << and_sum << endl;
  // cout << or_sum << endl;
  double ans = and_sum / or_sum;
  printf("%.12f\n", ans);
  return 0;
}
