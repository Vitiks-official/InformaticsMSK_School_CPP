#include <iostream>
#include <cmath>
using namespace std;

double rec(double k, double a, int n){
    if (n > 0)
        return rec(k * a, a, n - 1);
    else if (n < 0)
        return rec(k / a, a, n + 1);
    return k;
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << rec(1, a, n);
}
