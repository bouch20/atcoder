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
#define rrepd(i,a,b) for (int i=(a-1);i>=(b);--i)
#define rrep(i,n) rrepd(i,n,0)
typedef long long ll;
typedef pair<int, int> P;

const int mod = 1000000007;
struct mint {
	long long x;
    mint(const long long x=0) : x(x%mod) {}

	mint& operator+=(const mint a) {
		if ( (x+=a.x) >= mod) x-=mod;
		return *this;
	}
	mint& operator-=(const mint a) {
		if ( (x+= mod-a.x) >= mod) x-= mod;
		return *this;
	}
	mint& operator*=(const mint a) {
		(x*=a.x) %= mod;
		return *this;
	}
	mint& operator+(const mint a) const {
		mint res(*this);
		return res+=a;
	}
	mint& operator-(const mint a) const {
		mint res(*this);
		return res-=a;
	}
	mint& operator*(const mint a) const {
		mint res(*this);
		return res*=a;
	}
	mint pow(long long t) const {
		if (!t) return 1;
		mint a = pow(t>>1);
		a*=a;
		if(t&1) a*= *this;
		return a;
	}

	mint inv() const {
		return pow(mod-2);
	}
	mint& operator/=(const mint a) {
		return (*this) *= a.inv();
	}
	mint& operator/(const mint a) const {
		mint res(*this);
		return res/=a;
	}
};

struct combination {
  vector<mint> fact, ifact;

  // コンストラクタ
  combination(int n):fact(n+1),ifact(n+1) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
  }

  mint nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n]*ifact[r]*ifact[n-r];
  }
  mint nPr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n]*ifact[n-r];
  }
} comb(1000005);


int main(int argc, const char * argv[]) {
  int x, y;
  cin >> x >> y;
  if ( (y + x) % 3 != 0){
    cout << 0 << endl;
    return 0;
  }

  int n = (x+y) / 3;
  int r = y-n;
  cout << comb.nCr(n,r).x << endl;
  return 0;
}
