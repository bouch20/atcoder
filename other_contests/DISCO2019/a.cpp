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
  int x, y;
  cin >> x >> y;
  int ans = 0;
  if (x == 1){
    ans += 300000;
  }else if(x == 2){
    ans += 200000;
  }else if (x == 3){
    ans += 100000;
  }

  if (y == 1){
    ans += 300000;
  }else if(y == 2){
    ans += 200000;
  }else if (y == 3){
    ans += 100000;
  }

  if (x == 1 & y == 1){
    ans += 400000;
  }

  cout << ans << endl;
  return 0;
}
