#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z){
    int k;
    k += x + y + z;
    if (k >= 2)
        return 1;
    return 0;
}

int main(){
    bool x, y, z;
    cin >> x >> y >> z;
    cout << Election(x, y, z);
}
