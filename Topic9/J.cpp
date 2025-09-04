#include <iostream>
using namespace std;

void swap_nums(int &a, int &b, int &c){
    int k = c;
    c = a;
    a = k;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    swap_nums(a, b, c);
    cout << a << " " << b << " " << c;
}
