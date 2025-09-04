#include <iostream>
#include <cmath>
using namespace std;

string prime(long long a){
    for (int i = 2; i <= sqrt(a); ++i){
        if (a % i == 0)
            return "composite";
    }
    return "prime";
}

int main(){
    long long a;
    cin >> a;
    cout << prime(a);
}
