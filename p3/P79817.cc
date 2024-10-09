#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, pow;
    while (cin >> a >> b){
        pow = 1;
        for (int i = 0; i < b; i++) {
            pow *= a;
        }
        cout << pow << endl;
    }
    return 0;
}