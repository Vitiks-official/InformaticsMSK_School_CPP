#include <iostream>
using namespace std;

int main(){
    int num, last_num = 0, some_num = 1, max_some = 0;
    cin >> num;
    while (num != 0){
        if (last_num == num){
            some_num += 1;
        } else {
            if (max_some < some_num)
                max_some = some_num;
            some_num = 1;
        }
        last_num = num;
        cin >> num;
    }
    if (max_some > some_num)
        cout << max_some;
    else
        cout << some_num;
}