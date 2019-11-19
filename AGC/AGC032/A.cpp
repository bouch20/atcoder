// https://atcoder.jp/contests/agc032/submissions/5247490
// https://atcoder.jp/contests/agc032/submissions/5245182
// https://atcoder.jp/contests/agc032/submissions/5128832
// https://atcoder.jp/contests/agc032/submissions/5225102
// https://atcoder.jp/contests/agc032/submissions/5015053

#include <bits/stdc++.h>
#define int long long
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
# define p(s) std::cout << s << endl;
# define printIf(j,s1,s2) cout << (j ? s1 : s2) << endl;
# define YES(j) cout << (j ? "YES" : "NO") << endl;
# define Yes(j) std::cout << (j ? "Yes" : "No") << endl;


#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//#define int long long
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
# define p(s) std::cout << s << endl;

int H, W;
int MaxIndex;
int count_ = 0;

void count(char *p, int target){
  	int m=0,mini = 1010;
	rep(i, MaxIndex) {
      	if (p[i] == '#'){
        	m = abs(i - target) + 1;
        	int l = m / W;
          	mini = min(mini,  (l + (m % W)));
      	}
    }
    count_ = max(mini, count_);
};

int main() {

  	cin >> H >> W;
    MaxIndex = H*W ;
  	char A[MaxIndex];
  	for (int i=0;i<MaxIndex;i++){
        cin >> A[i];
    }

  	rep(i, MaxIndex) {
    	if (A[i] == '.'){
          count(A,i);
    	}
  	}
	printf("%d\n", count_);

    return 0;
}
