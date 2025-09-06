#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size() - 1; ++i){
        if (s[i] == s[i + 1] && s[i] == ' '){
            s.erase(i + 1, 1);
            --i;
        }
    }
    cout << s;
}
