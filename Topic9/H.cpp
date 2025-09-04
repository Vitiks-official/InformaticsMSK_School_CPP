#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned char c;
    cin >> c;
    if ('a' <= c && c <= 'z')
        cout << (char)(c - 32);
    else if ('A' <= c && c <= 'Z')
        cout << (char)(c + 32);
    else
        cout << c;
}
