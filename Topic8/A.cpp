#include <iostream>
#include <string>
using namespace std;

bool IsDigit(unsigned char c){
    if (c <= '9' && c >= '0')
        return 1;
    return 0;
}

int main(){
    char c;
    cin >> c;
    if (IsDigit(c))
        cout << "yes";
    else
        cout << "no";
}
