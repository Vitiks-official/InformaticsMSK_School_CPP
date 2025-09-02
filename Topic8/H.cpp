#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); ++i){
        if (s[i + 1] == s[i]){
            cout << s[i];
        }
    }
}
