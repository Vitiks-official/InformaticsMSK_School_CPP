#include <iostream>
using namespace std;

double power (double a, int n){
    double res = 1;
    for (int i = 0; i < n; ++i)
        res *= a;
    return res;
}

int main(){
    int n;
    double a;
    cin >> a >> n;
    cout << power(a, n);
}
