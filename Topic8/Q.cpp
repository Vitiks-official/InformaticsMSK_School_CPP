#include <iostream>
#include <string>
using namespace std;

int main(){
    string cur_time, add_time, some_s;
    cin >> cur_time >> add_time;
    long long cur_h, cur_m, cur_s;

    cur_h = stoll(cur_time.substr(0, 2)), cur_m = stoll(cur_time.substr(3, 5)), cur_s = stoll(cur_time.substr(6, 8));
    add_time = ":::" + add_time;

    some_s = add_time.substr(add_time.rfind(":") + 1, add_time.size());
    add_time = add_time.substr(0, add_time.rfind(":"));
    if (!some_s.empty())
        cur_s += stoll(some_s);

    some_s = add_time.substr(add_time.rfind(":") + 1, add_time.size());
    add_time = add_time.substr(0, add_time.rfind(":"));
    if (!some_s.empty())
        cur_m += stoll(some_s);
    cur_m += cur_s / 60;

    some_s = add_time.substr(add_time.rfind(":") + 1, add_time.size());
    add_time = add_time.substr(0, add_time.rfind(":"));
    if (!some_s.empty())
        cur_h += stoll(some_s);
    cur_h += cur_m / 60;

    cout << cur_h % 24 / 10 << cur_h % 24 % 10 << ":" << cur_m % 60 / 10 << cur_m % 60 % 10 << ":" << cur_s % 60 / 10 << cur_s % 60 % 10;
    if (cur_h > 23)
        cout << "+" << cur_h / 24 << " days";
}
