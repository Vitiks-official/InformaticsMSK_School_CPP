#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int n, m;
    cin >> s >> n >> m;
    --n, --m;
    char a;
    for (int i = 0; i < (m - n + 1) / 2; ++i){
        a = s[n + i];
        s[n + i] = s[m - i];
        s[m - i] = a;
    }
    cout << s;
}
