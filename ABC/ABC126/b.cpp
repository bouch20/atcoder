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
    char s[4];
	cin >> s;
    bool yymm_flag = false, mmyy_flag = false;
    int N[4];
    for (int i=0; i<3; i++){
      N[i] = s[i] - '0';;
    }
    //int ia = a - '00';
  	//if N[0,1] <
    //cin >> s;
  	if (N[0] <= 1 && N[1] <= 2 && !(N[0] == 0 && N[1] == 0 )){
  		mmyy_flag = true;
    }
  	if (N[2] <= 1 && N[3] <= 2&& !(N[2] == 0 && N[3] == 0 )){
		yymm_flag = true;
    }
    if (mmyy_flag == true && yymm_flag == true) {
      cout << "AMBIGUOUS" <<endl;
    }else if (mmyy_flag ==true && yymm_flag == false ){
      cout << "MMYY" <<endl;
    }else if (mmyy_flag ==false && yymm_flag == true) {
      cout << "YYMM" <<endl;
    }else{
      cout << "NA" <<endl;
    }

    //s[K-1] += 0x20;
  	//cout << N[0] <<endl;


    return 0;
}
