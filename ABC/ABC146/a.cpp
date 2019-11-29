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
  string s;
  cin >> s;
  rep(i, s.size()){
    if (s[i] + n > 'Z'){
      s[i] -= 26;  
    }
    s[i] += n;
  }
  cout << s << endl;
  return 0;
}
