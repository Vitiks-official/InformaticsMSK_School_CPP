#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector <int>> main_arr;

void rec(int n, vector <int> &a, int max_n){
    if (n == 0){
        vector <int> s;
        for (int i = a.size() - 1; i >= 0; --i)
            s.push_back(a[i]);
        main_arr.push_back(s);
        return;
    }
    for (int i = 1; i <= min(n, max_n); ++i){
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
    sort(main_arr.begin(), main_arr.end());
    for (auto x: main_arr){
        for (auto z: x)
            cout << z << " ";
        cout << "\n";
    }
}
