#include <iostream>
using namespace std;

void hanoi(int n, int s1, int s2) {
    if (n == 1) {
        cout << 1 << " " << s1 << " " << s2 << "\n";
        return;
    }
    hanoi(n - 1, s1, 6 - s1 - s2);
    cout << n << " " << s1 << " " << s2 << "\n";
    hanoi(n - 1, 6 - s1 - s2, s2);
}

int main(){
    int n;
    cin >> n;
    hanoi(n, 1, 3);
}
