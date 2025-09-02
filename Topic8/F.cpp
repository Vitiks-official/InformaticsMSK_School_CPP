#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s1 = "";
    getline(cin, s);
    s += " ";
    while(s.size()){
        string s2 = s.substr(0, s.find(" "));
        if (s2.size() > s1.size())
            s1 = s2;
        s = s.substr(s.find(" ") + 1);
    }
    cout << s1 << "\n" << s1.size();
}
