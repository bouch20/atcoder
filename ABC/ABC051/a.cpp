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
  string s;
  cin >> s;

  cout << s.substr(0, 5) << ' '<< s.substr(6, 7) << ' ' << s.substr(14, 5) << endl;
  
  return 0;
}
