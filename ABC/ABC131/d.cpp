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
// #define int long long
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define ll long long

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

    int N;
    cin >> N;
    vector< pair<ll, ll> > xy;

    rep(i,N){
      ll x, y;
      cin >> x >> y;
      xy.push_back(make_pair(x, y));
    }

    sort(xy.begin(), xy.end(), compare_pair);

    ll sum = 0;
    bool flag = false;
    rep(i,N){
      sum += xy[i].first;
      if (sum > xy[i].second){
        flag = true;
      }
    }
    if(flag){
      cout << "No" << endl;
    }
    else{
      cout << "Yes" << endl;
    }

    return 0;
}
