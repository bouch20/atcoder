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
  int ans = 0;
  int first_b = 0;
  int last_a = 0;
  int ab = 0;
  rep(i, n){
    string s;
    cin >> s;
    rep(i, s.size()-1){
      if(s[i] == 'A' & s[i+1] == 'B'){
        ans++;
      }
    }
    if(s[0] == 'B' && s[s.size() - 1] == 'A'){
      ab++;
    }else if(s[0] == 'B'){
      first_b++;
    }
    else if(s[s.size()-1] == 'A'){
      last_a++;
    }
  }
  if(ab > 0){
    ans += ab -1;
    if(first_b > 0){
      ans++;
      first_b--;
    }
    if(last_a > 0){
      ans++;
      last_a--;
    }
  }
  cout << ans + min(first_b, last_a) << endl;
  return 0;
}
