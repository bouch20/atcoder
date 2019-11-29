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

int ans =9999999;
int gx, gy;
void bfs(vector<string>& vec, int x, int y, int i){
  vec[x][y] = '#';
  // cout << i << endl;
  if ((x == gx-1) & (y == gy-1)) ans = min(ans, i-1);
  if (vec[x+1][y] == '.') bfs(vec, x+1, y, ++i);
  if (vec[x][y+1] == '.') bfs(vec, x, y+1, ++i);
  if (vec[x-1][y] == '.') bfs(vec, x-1, y, ++i);
  if (vec[x][y-1] == '.') bfs(vec, x, y-1, ++i);
}

int main() {
  int r, c;
  cin >> r >> c;
  int sx, sy;
  cin >> sx >> sy;

  cin >> gx >> gy;
  vector< string > vec(r);
  rep(i, r){
    cin >> vec[i];
  }
  bfs(vec, sx-1, sy-1, 0);

  // rep(i, r){
  //   cout << vec[i] << endl;
  // }
  cout << ans << endl;
  return 0;
}
