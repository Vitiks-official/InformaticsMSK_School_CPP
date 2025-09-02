#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int k = 1;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == ' ')
            ++k;
    }
    cout << k;
}
