#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)

int inputValue(){
    int a;
    cin >> a;
    return a;
};

void inputArray(int * p, int a){
    rep(i, a){
        cin >> p[i];
    }
};

int main(int argc, const char * argv[]) {

    // source code
    int N;
	N = inputValue();
  	int C[N], V[N];
  	inputArray(V, N);
  	inputArray(C, N);
  	int sum_ = 0;
  	for (int i=0; i<N; i++) {
    	if (0 < (V[i] - C[i]) ){
          sum_ += V[i] - C[i];
        }
    }
	printf("%d\n", sum_);

    return 0;
}
