#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortfun(int a, int b){
    return a > b;
}

int main(){
    int n, winner_score = 0, dad_score = 0;
    bool flag = 0;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n - 1; ++i){
        if (arr[i] > winner_score){
            dad_score = 0;
            winner_score = arr[i];
        } else if (dad_score < arr[i] && arr[i] > arr[i + 1] && arr[i] % 10 == 5){
            dad_score = arr[i];
        }
    }
    sort(arr.begin(), arr.end(), sortfun);
    if (dad_score == 0){
        cout << dad_score;
    } else {
        for (int i = 0; i < n - 1; ++i){
            if (arr[i] == dad_score){
                cout << i + 1;
                break;
            }
        }
    }
}
