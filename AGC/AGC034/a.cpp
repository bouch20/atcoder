#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <utility>
#include <sstream>
#include <iterator>

using namespace std;
// #define int long long
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)

struct Data{
    // string city;
    int ex_pos = 0; // 元の位置
    int num = 0; // 実際のデータ
    int A;
    int B;
};


bool wayToSort(const Data &SP, const Data &SP2) {
  // if (SP.city == SP2.city){
  return SP.num > SP2.num;
  // }else{
    // return SP.city < SP2.city;
  // }
};

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

    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;

    string S;
    cin >> S;

    bool do_flag = true;

    int pos = S.find("##");

    if (pos != -1) {
      do_flag = false;

    }

    if (C > D){
      if (A > B){
        S.erase(A-1);
      }
      string k = S.substr(B, D-B);
      int check = k.find("...");
      if (check == -1) {
        do_flag = false;

      }
    }else if (C < D){
      if (A < B){
        S.erase(B-1);
      }
      string k = S.substr(A, C-A);
      int check = k.find("##");

      if (check != -1) {
        do_flag = false;

      }

    }

    if (do_flag){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }

    return 0;
}
