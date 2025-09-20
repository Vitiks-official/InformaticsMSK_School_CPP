#include <iostream>
using namespace std;

int rec(int n1, int n2, int n){
    if (n)
        return rec(n2, n1 + n2, n - 1);
    return n2;
}

int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << 0;
        return 0;
    }
    if (n <= 2){
        cout << 1;
        return 0;
    }
    cout << rec(1, 1, n - 2);
}
