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
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  int x_diff = sx-tx;
  int y_diff = sy-ty;
  // 1回目
  if(y_diff < 0){
    cout << string(abs(y_diff), 'U');
  }else{
    cout << string(abs(y_diff), 'D');
  }
  if(x_diff < 0){
    cout << string(abs(x_diff), 'R');
  }else{
    cout << string(abs(x_diff), 'L');
  }
  // 1回目往復
  if(y_diff > 0){
    cout << string(abs(y_diff), 'U');
  }else{
    cout << string(abs(y_diff), 'D');
  }
  if(x_diff > 0){
    cout << string(abs(x_diff), 'R');
  }else{
    cout << string(abs(x_diff), 'L');
  }

  // 2回目
  if(x_diff > 0){
    cout << 'R';
  }else{
    cout << 'L';
  }

  if(y_diff < 0){
    cout << string(abs(y_diff)+1, 'U');
  }else{
    cout << string(abs(y_diff)+1, 'D');
  }
  if(x_diff < 0){
    cout << string(abs(x_diff)+1, 'R');
  }else{
    cout << string(abs(x_diff)+1, 'L');
  }

  if(y_diff > 0){
    cout << 'U';
  }else{
    cout << 'D';
  }

  // 2回目往復
  if(x_diff < 0){
    cout << 'R';
  }else{
    cout << 'L';
  }

  if(y_diff > 0){
    cout << string(abs(y_diff)+1, 'U');
  }else{
    cout << string(abs(y_diff)+1, 'D');
  }
  if(x_diff > 0){
    cout << string(abs(x_diff)+1, 'R');
  }else{
    cout << string(abs(x_diff)+1, 'L');
  }

  if(y_diff < 0){
    cout << 'U';
  }else{
    cout << 'D';
  }
  cout << endl;
  return 0;
}
