#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s2.find(s1) != 18446744073709551615)
        cout << "yes";
    else
        cout << "no";
}
