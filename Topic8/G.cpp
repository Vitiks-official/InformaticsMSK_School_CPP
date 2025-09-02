#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    bool a = true;
    getline(cin, s);
    for (int i = 0; i <= s.size(); ++i){
        if (s[i] != s[s.size() - 1 - i])
            a = false;
    }
    if (a)
        cout << "yes";
    else
        cout << "no";
}
