#include <iostream>
using namespace std;

int main(){
    int n, ni, result = 0;
    cin >> n;
    ni = n;
    while (ni > n/1000) {
        result += ni % 10;
        ni /= 10;
    }
    cout << result << endl;
    return 0;
}