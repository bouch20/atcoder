#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)

typedef long long ll;
typedef pair<int, int> P;

int n, m;
vector< string > lake;

void dfs(int x, int y){
    if (x<0 || y<0 || x>=n || y>=m) return;

    if( lake[x][y] == 'W') {
        lake[x][y] = '.';
        for (int i=-1; i<=1; i++) {
            for (int j=-1; j<=1; j++) {
                dfs(x+i, y+j);
            }
        }
    }
	
}

int main(){
    int count = 0;
	cin >> n >> m;
	lake = vector<string> (n);
	rep(i,n){
		cin >> lake[i];
	}
	
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (lake[i][j] == 'W') {
                count++;
                dfs(i,j);
            }
        }
    }

    cout << count << endl;
	return 0;
}

/*
10 12
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
 */