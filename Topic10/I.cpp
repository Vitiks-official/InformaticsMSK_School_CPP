#include <iostream>
using namespace std;

void rec(int n){
    int k;
    cin >> k;
    if (n > 0)
        rec(n - 1);
    cout << k << " ";
}

int main(){
    int n;
    cin >> n;
    rec(n - 1);
}
