#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_set>
using namespace std;

string similar(string text, map <int, vector <unordered_set <string>>> &dict){
    vector <string> text_vec = {text};
    for (int i = 0; i < text.size(); ++i)
        text_vec.push_back(text.substr(0, i) + text.substr(i + 1));
    int k = 0;
    string some_word = "";
    for (int i = text.size() - 1; i <= text.size() + 1; ++i){
        for (int j = 0; j < dict[i].size(); ++j){
            for (int l = 0; l < text_vec.size(); ++l){
                if (dict[i][j].find(text_vec[l]) != dict[i][j].end()){
                    k++;
                    some_word = *dict[i][j].begin(); // берём любое слово из множества
                    break;
                }
            }
        }
    }
    string answer = text + " " + to_string(k);
    if (k == 1)
        answer += " " + some_word;
    cout << answer << "\n";
    return "";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    string text;
    map <int, vector <unordered_set <string>>> DictMap;
    for (int i = 1; i <= 12; ++i)
        DictMap[i] = {};
    for (int i = 0; i < n; ++i){
        cin >> text;
        unordered_set<string> forms;
        forms.insert(text);
        for (int i = 0; i < text.size(); ++i){
            forms.insert(text.substr(0, i) + text.substr(i + 1));
        }
        DictMap[text.size()].push_back(forms);
    }
    for (int i = 0; i < m; ++i){
        cin >> text;
        similar(text, DictMap);
    }
}
