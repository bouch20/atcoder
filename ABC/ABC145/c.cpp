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
  int n;
  cin >> n;
  
  vector<int> x(n);
  vector<int> y(n);
  rep(i, n){
    cin >> x[i] >> y[i];
  }
  double sum_ = 0.0;
  rep(i, n){
    repd(j, i+1, n){
      sum_ += sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2)) *2.0;
    }
  }

  printf("%.10lf\n", sum_/n);
  return 0;
}
