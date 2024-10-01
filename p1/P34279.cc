#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    string result;
    cin >> h >> m >> s;
    s++;
    if (s>=60){
        m++;
        s = 0;
    }
    if (m >= 60) {
        h++;
        m = 0;
    }
    if (h >= 24) h = 0;

    if (h < 10) result += "0" + to_string(h) + ":";
    else result += to_string(h) + ":";
    if (m < 10) result += "0" + to_string(m) + ":";
    else result += to_string(m) + ":";
    if (s < 10) result += "0" + to_string(s);
    else result += to_string(s);

    cout << result << endl;
    return 0;
}