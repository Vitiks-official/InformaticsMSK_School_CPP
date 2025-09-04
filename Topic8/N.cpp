#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    bool flag = true;
    cin >> s;
    s += ".";
    for (int i = 0; i < 4; ++i){
        string n = s.substr(0, s.find('.'));
        s = s.substr(s.find('.') + 1);
        if (!n.empty()){
            long long k = stoll(n);
            if (k < 0 || k > 255)
                flag = false;
        } else {
            flag = false;
        }
    }
    cout << flag;
}
