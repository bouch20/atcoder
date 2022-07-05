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


struct UnionFind {
    vector<int> par;
    UnionFind(int n) : par(n){
        rep(i, n) par[i]=i; 
    }

    int root(int x){
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int n, q;
    cin >> n >> q;
    UnionFind tree(n);
    int p, a, b;
    rep(i,q){
        cin >> p >> a >> b;
        if(p==0){
            tree.unite(a, b);
        }else{
            if(tree.same(a, b)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    
}