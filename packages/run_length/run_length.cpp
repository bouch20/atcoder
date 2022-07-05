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
#include <map>

using namespace std;

#define repd(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repd(i,0,n)
typedef long long ll;
typedef pair<int, int> P;


string run_length_encoder(string s){
    char before_char = s[0];
    int count = 1;
    string decode_str = "";
    repd(i, 1, (int) s.size()){
        if(before_char == s[i]){
            count++;
        }else{
            decode_str = decode_str + before_char + to_string(count);
            before_char = s[i];
            count = 1;
        }
    }
    decode_str = decode_str + before_char + to_string(count);
    return decode_str;
}

int main(){
    string s;
    cin >> s;
    string decode_str = run_length_encoder(s);
    cout << decode_str << endl;
}