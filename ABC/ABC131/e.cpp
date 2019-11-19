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

ll _sum_vector(pair<int, int> pairs){
  if(pairs.first == 0 || pairs.second == 0){
    return 0;
  }
  return (pairs.first - 1) * (pairs.second - 1);
}

bool compare_pair(pair<ll, ll> pair1, pair<ll, ll> pair2){
  return (pair1.second < pair2.second);
}

int main(int argc, const char * argv[]) {

    int n, k;
    cin >> n >> k;
    int mx = (n-1)*(n-2)/2;
    if (mx < k){
      puts("-1");
      return 0;
    }
    vector<P> ans;
    rep(i,n-1){
      ans.push_back(P(i+1,n));
    }

    int add = mx-k;
    vector<P> edge;
    rep(i,n-1)rep(j,i) edge.push_back(P(i+1,j+1));
    rep(i,add) ans.push_back(edge[i]);
    cout << ans.size() << endl;
    rep(i, ans.size()){
      cout << ans[i].first << " " << ans[i].second << endl;
    }


    return 0;
}