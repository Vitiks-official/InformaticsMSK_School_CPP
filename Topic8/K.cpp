#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s1 = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i){
        if (s[i] != ' ')
            s1 += s[i];
    }
    bool a = true;
    for (int i = 0; i <= s1.size(); ++i){
        if (s1[i] != s1[s1.size() - 1 - i])
            a = false;
    }
    if (a)
        cout << "yes";
    else
        cout << "no";
}
