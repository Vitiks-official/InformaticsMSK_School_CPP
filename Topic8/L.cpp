#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s2 = "";
    int n;
    cin >> s >> n;
    for (int i = 0; i < s.size(); ++i){
        s2 += (char)((s[i] - 65 - n + 26) % 26 + 65);
    }
    cout << s2;
}
