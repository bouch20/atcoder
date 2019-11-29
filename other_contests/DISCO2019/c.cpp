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

// int bfs(vector<string>& s_cake, vector<vector<int>>& visited, vector<vector<int>> s){
//   if (s_cake[])
// }

void bfs(vector<string>& s_cake, vector<vector<int>>& s, int x, int y, int i){
  // if (s_cake[x][y] == "."){
  //   s_cake[x][y]
  // }
  // return
  int x_left, x_right, y_left, y_right = 0;
  rep(i,)
  // int inc = 1;
  // while (s_cake[x][y])
  return;
}

int main(int argc, const char * argv[]) {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int>> s(h, vector<int> (w, 0));
  vector<string> s_cake(h);
  rep(i, h){
    cin >> s_cake[i];
  }
  int index = 1;
  rep(x, h){
    rep(y, w){
      if (s_cake[x][y] == '#'){
        bfs(s_cake, s, x, y, index);
        index++;
      }
    }
  }
  return 0;
}
