#include <iostream>
#include <string>
using namespace std;

bool Compare(string S1, string S2){
    return S1 == S2;
}

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (Compare(s1, s2))
        cout << "yes";
    else
        cout << "no";
}
