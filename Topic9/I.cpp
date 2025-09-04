#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double len_line(double x1, double y1, double x2, double y2, double x3, double y3){
    double line_len = 0;
    line_len += sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
    line_len += sqrt(abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2));
    line_len += sqrt(abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3));
    return line_len;
}

int main(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(7) << len_line(x1, y1, x2, y2, x3, y3);
}
