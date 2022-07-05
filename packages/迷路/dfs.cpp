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

void dfs(vector<P>& stack, vector<string>& vec, int& w, int& h){
    if(stack.size() == 0){
        cout << "No" << endl;
        exit(0);
    }
    P& tmp = stack.back();
    stack.pop_back();
    int x, y;
    x = tmp.first;
    y = tmp.second;
    if(x < 0 || x > w || y < 0 || y > h || vec[y][x]=='#') {dfs(stack, vec, w, h); return;}
    if(vec[y][x] == '.'){
        vec[y][x] = '#';
        stack.push_back(make_pair(x+1, y));
        stack.push_back(make_pair(x-1, y));
        stack.push_back(make_pair(x, y+1));
        stack.push_back(make_pair(x, y-1));
    }
    if(vec[y][x] == 'g'){
        cout << "Yes" << endl;
        exit(0);
    }
    dfs(stack, vec, w, h);

}

int main(){
    int h, w;
    cin >> h >> w;

    vector<string> vec(h+2);
    vector< P> stack;
    vec[0] = string(w+2, '#');
    vec[h+1] = string(w+2, '#');
    int start_x=0, start_y=0;
    rep(i,h){
        string s;
        cin >> s;
        rep(j, w){
            if(s[j] == 's'){
                start_x = j+1;
                start_y = i+1;
            }
        }
        vec[i+1] = '#' + s + '#';
    }
    vec[start_y][start_x] = '.';
    stack.push_back(make_pair(start_x, start_y));
    dfs(stack, vec, w, h);
    
}