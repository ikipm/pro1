#include <iostream>
using namespace std;

int main(){
    int y, sum = 0;
    bool leap = false;
    cin >> y;
    if (y % 4 == 0) {
        for (int i = 0; i < 2; i++) {
            sum += (y%10);
            y = y / 10;
        }
        if (sum != 0) leap = true;
        else {
            if (y % 4 == 0) leap = true;
        }
    }
    if (leap) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}