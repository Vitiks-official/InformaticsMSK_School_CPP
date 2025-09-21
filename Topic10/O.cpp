#include <iostream>
using namespace std;

int rec(){
    int a;
    cin >> a;
    if (a == 0)
        return a;
    return a + rec();
}

int main(){
    cout << rec();
}
