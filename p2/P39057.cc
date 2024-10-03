#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    double n, x, y;
    string figure;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> figure;
        if (figure == "circle") {
            cin >> x;
            cout << M_PI*x*x << endl;
        } else {
            cin >> x >> y;
            cout << x*y << endl;
        }
    }
    return 0;
}