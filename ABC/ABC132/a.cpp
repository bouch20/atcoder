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

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
// #define ll long long
typedef long long ll;
typedef pair<int, int> P;


int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    int p[n];
    rep(i,n) cin >> p[i];
    int ans = 0;
    repd(i,1,n-1){
      if (p[i-1] > p[i] && p[i] > p[i+1]){
        ans += 1;
      }else if (p[i-1] < p[i] && p[i] > p[i+1]){
        ans += 1;
      }
    }
    cout << ans << endl;
    

    return 0;
}
