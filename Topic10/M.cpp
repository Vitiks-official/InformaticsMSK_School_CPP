#include <iostream>
using namespace std;

double power(double a, int n){
    if (n > 0)
        return a * power(a, n - 1);
    return 1;
}

int main(){
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
}
