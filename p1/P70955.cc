#include <iostream>
using namespace std;

int main() {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    cout << (s+m*60+h*3600+d*(3600*24)+y*(3600*24*365)) << endl;
    return 0;
}