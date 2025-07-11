#include <iostream>
using namespace std;

int main(){
    int x, y, z, some;
    cin >> x >> y >> z;
    if (x > y){
        some = y;
        y = x;
        x = some;
    }
    if (y > z){
        some = z;
        z = y;
        y = some;
    }
    if (x > y){
        some = y;
        y = x;
        x = some;
    }
    if ((x + y + z) % 2 != 0 || z > x + y || (z == x + y && y - x > 1)){
        cout << "NO";
    } else {
        cout << "YES";
    }
}
