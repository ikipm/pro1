#include <iostream>
using namespace std;

int main(){
    int x, y, max, min;
    cin >> x >> y;
    if (x > y){
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }
    while (max >= min) {
        cout << max << endl;
        max--;
    }
    return 0;
}