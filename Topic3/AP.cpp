#include <iostream>
using namespace std;

int main(){
    int a, b, c, d = 0, e;
    cin >> a >> b >> c;
    while (a != b - 1 || b != c - 1){
        ++d;
        if (b - a > c - b){
            e = b;
            b = (a + b) / 2;
            c = e;
        } else {
            e = b;
            b = (c + b) / 2;
            a = e;
        }
    }
    cout << d;
}
