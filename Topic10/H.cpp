#include <iostream>
#include <vector>
using namespace std;

int s_arr(vector <int> a){
    int s = 0;
    for (auto x: a)
        s += x;
    return s;
}

void rec(vector <int> a, int n, int k){
    for (auto x: a)
        cout << x << " ";
    cout << "\n";
    a[n - 1] += 1;
    for (int i = n - 1; i > 0; --i){
        if (a[i] > k){
            a[i - 1] += 1;
            a[i] = 1;
        }
    }
    if (a[0] > k)
        return;
    else
        rec(a, n, k);
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n, 1);
    rec(a, n, k);
}
