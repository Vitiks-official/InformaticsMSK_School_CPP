#include <iostream>
using namespace std;

int rec(int n1, int n2){
    if (n1 == 0 || n2 == 0)
        return n1 + n2;
    if (n1 > n2)
        return rec(n1 % n2, n2);
    else
        return rec(n2 % n1, n1);
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << rec(n1, n2);
}
