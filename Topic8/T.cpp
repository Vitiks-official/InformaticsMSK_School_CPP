#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '1' || s[i] == '2'){
            s = s.substr(0, i) + s.substr(i + 1);
            --i;
        }
    }
    cout << s;
}
