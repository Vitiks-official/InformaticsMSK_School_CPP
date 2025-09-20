#include <iostream>
#include <vector>
using namespace std;

void rec(int n, vector <int> &a, int max_n){
    if (n == 0){
        for (int i = 0; i < a.size(); ++i)
            cout << a[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = min(n, max_n); i >= 1; --i){
        a.push_back(i);
        rec(n - i, a, i);
        a.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> a;
    rec(n, a, n);
}
