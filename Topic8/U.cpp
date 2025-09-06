#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s, ss = "";
    string ALPH = "aeuioy";
    cin >> s;
    for (int i = 0; i < (int)s.size(); ++i){
        if (ALPH.find(s[i]) != string::npos){
            ss += "a";
        } else {
            ss += "b";
        }
    }
    for (int i = 0; i < (int)ss.size() - 2; ++i){
        if (ss[i] == ss[i + 1] && ss[i + 1] == ss[i + 2]){
            ss = ss.substr(0, i + 2) + "c" + ss.substr(i + 2);
            i = -1;
        }
    }
    cout << ss.size() - s.size();
}
