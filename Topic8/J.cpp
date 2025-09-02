#include <iostream>
#include <string>
using namespace std;

int main(){
    long long x = 0, y = 0;
    string s;
    while (getline(cin, s)){
        string s1 = s.substr(0, s.find(" "));
        if (s1 == "North")
            y += stoll(s.substr(s.find(" ") + 1));
        else if (s1 == "South")
            y -= stoll(s.substr(s.find(" ") + 1));
        else if (s1 == "East")
            x += stoll(s.substr(s.find(" ") + 1));
        else if (s1 == "West")
            x -= stoll(s.substr(s.find(" ") + 1));
        }
    cout << x << " " << y;
}
