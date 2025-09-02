#include <iostream>
#include <string>
using namespace std;

unsigned char ToUpper(unsigned char c){
    if ('a' <= c && c <= 'z')
        return (unsigned char)(c - 32);
    return c;
}

int main(){
    unsigned char c;
    cin >> c;
    cout << ToUpper(c);
}
