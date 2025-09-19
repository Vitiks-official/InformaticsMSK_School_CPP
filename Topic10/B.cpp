#include <iostream>
using namespace std;

int rec(long long a, long long b){
    if (a == 0 || b == 0)
        return a + b;
    if (a > b)
        return rec(a % b, b);
    else
        return rec(a, b % a);
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << rec(a, b);
}
