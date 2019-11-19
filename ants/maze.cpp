#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)

typedef long long ll;
typedef pair<int, int> P;

int n, m;
vector< string > maze;

void bfs(queue< vector<int> >& q, vector< vector<int> >& ans){
    while( ! q.empty() ) {
        vector<int> point = q.front();
        q.pop();
        int x = point[0];
        int y = point[1];
        int i = point[2];
        if (ans[x][y] != 0) continue;
        ans[x][y] = i;

        if (x>0   && maze[x-1][y]=='.') q.push( vector<int>{x-1, y, i+1});
        if (x<n-1 && maze[x+1][y]=='.') q.push( vector<int>{x+1, y, i+1} );
        if (y>0   && maze[x][y-1]=='.') q.push( vector<int>{x, y-1, i+1});
        if (y<m-1 && maze[x][y+1]=='.') q.push( vector<int>{x, y+1, i+1});
    }
}

int main(){
    queue< vector<int> > q;
	cin >> n >> m;
    vector<int> start = {0,1,0};
    P goal = P(9,8);
	maze = vector<string> (n);
    vector < vector<int> > ans(n, vector<int> (m, 0));

	rep(i,n){
		cin >> maze[i];
	}
	
    q.push(start);
    bfs(q, ans);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout << ans[goal.first][goal.second] << endl;
	return 0;
}

/*
10 10
#S######.#
......#..#
.#.##.##.#
.#........
##.##.####
....#....#
.#######.#
....#.....
.####.###.
....#....#
 */