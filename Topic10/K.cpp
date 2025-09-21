#include <iostream>
using namespace std;

int sum(int a, int b){
    if (a != 0 && b != 0)
        return sum(a + 1, b - 1);
    return a + b;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
}
