#include <iostream>
#include <string>
using namespace std;

bool smtry(string s){
    for (int i = 0; i < s.size() / 2; ++i){
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

int main(){
    string s, answer = "";
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        string n = "";
        for (int j = i; j < s.size(); ++j){
            n += s[j];
            if (smtry(n) && n.size() > answer.size())
                answer = n;
        }
    }
    cout << answer;
}
