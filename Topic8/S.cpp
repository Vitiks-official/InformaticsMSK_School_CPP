#include <iostream>
#include <string>
#include <vector>
using namespace std;

int where(string s, vector <string> &arr){
    for (int i = 0; i < arr.size(); ++i){
        if (arr[i].find(s) != string::npos)
            return i + 1;
    }
    return 0;
}

string tolower(string s){
    string ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < s.size(); ++i){
        if (ALPH.find(s[i]) != string::npos){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

string delete_tags(string s){
    int pos1 = s.find('<');
    int pos2 = s.find('>');
    while (pos1 != string::npos){
        s = s.substr(0, pos1) + " " + s.substr(pos2 + 1);
        pos1 = s.find('<');
        pos2 = s.find('>');
    }
    return s;
}

int main(){
    int k, n, m;
    string some_s;
    getline(cin, some_s);
    k = stoi(some_s);
    vector <string> arr_k(k);
    for (int i = 0; i < k; ++i){
        getline(cin, some_s);
        some_s = tolower(some_s);
        arr_k[i] = some_s;
    }
    getline(cin, some_s);
    n = stoi(some_s);
    vector <string> arr_n(n);
    for (int i = 0; i < n; ++i){
        getline(cin, some_s);
        some_s = tolower(some_s);
        for (int j = 0; j < k; ++j){
            int pos = some_s.find("<" + arr_k[j] + ">");
            while (pos != string::npos){
                some_s.erase(pos, arr_k[j].size() + 2);
                pos = some_s.find("<" + arr_k[j] + ">");
            }
            pos = some_s.find("</" + arr_k[j] + ">");
            while (pos != string::npos){
                some_s.erase(pos, arr_k[j].size() + 3);
                pos = some_s.find("</" + arr_k[j] + ">");
            }
        }
        some_s = delete_tags(some_s);
        arr_n[i] = some_s;
    }
    getline(cin, some_s);
    m = stoi(some_s);
    for (int i = 0; i < m; ++i){
        getline(cin, some_s);
        some_s = tolower(some_s);
        cout << where(some_s, arr_n) << "\n";
    }
}
