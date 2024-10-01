#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    double result;
    for (int i = 1; i <= n; i++) {
        result += 1.0/i;
    }
    cout << result << endl;
    return 0;
}