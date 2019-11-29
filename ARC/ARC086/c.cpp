#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include <utility>
#include <numeric>
#include <iterator>
#include <map>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)
typedef long long ll;
typedef pair<int, int> P;


int main(int argc, const char * argv[]) {
  int n, k;
  cin >> n >> k;
  vector<int> kind(n, 0);
  int counts = 0;
  rep(i,n){
    int a;
    cin >> a;
    a--;
    if(kind[a] == 0){
      counts++;
    }
    kind[a] += 1;
  }

  int ans = 0;
  sort(kind.begin(), kind.end(), greater<int>());
  for (int i=counts-1;i>k-1;--i){
    ans += kind[i];
  }
  cout << ans << endl;
  
  return 0;
}
