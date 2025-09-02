#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    bool flag = true;
    cin >> s;
    int k;
    s += ".";
    for (int i = 0; i < 4; ++i){
        string n = s.substr(0, s.find('.'));
        s = s.substr(s.find('.') + 1);
        if (!n.empty())
            int k = stoi(n);
            if (k > 255 || k < 0){
                flag = false;
            }
        else
            flag = false;
        cout << n << " " << flag << "\n";

    }
    cout << flag;
}
