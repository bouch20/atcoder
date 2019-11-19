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

ll gcd(ll a, ll b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

ll lcm(ll a, ll b)
{
    ll temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}


int main(int argc, const char * argv[]) {

    ll A, B, C, D;

    cin >> A >> B >> C >> D;
    ll k1 = B / C;
    ll k2 = B / D;
    ll s1 = (A-1) / C;
    ll s2 = (A-1) / D;
    ll m1 = B / lcm(C, D);
    ll m2 = (A-1) / lcm(C, D);

    ll m = k1 + k2 - (s1 + s2) - (m1 - m2);
    cout << B-(A-1) - m<< endl;

    return 0;
}
