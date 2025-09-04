#include <iostream>
#include <string>
using namespace std;

int main(){
    string k, s2;
    int n;
    cin >> k >> n;
    for (int i = 0; i < n - 1; ++i){
        s2 = k + " ";
        k = "";
        int d = 1;
        for (int j = 0; j < s2.size() - 1; ++j){
            if (s2[j] == s2[j + 1]){
                ++d;
            } else {
                k += d + '0';
                k += s2[j];
                d = 1;
            }
        }
    }
    for (int i = 0; i < k.size(); ++i)
        cout << k[i];
}
