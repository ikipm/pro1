#include <iostream>
using namespace std;

int main(){
    int f, c, result = 0;
    bool white = true;
    string n;
    cin >> f >> c;
    for (int i = 0; i < f; i++) {
        cin >> n;
        for (int j = 0; j < c; j++) {
            if (white) result += int(n[j])-48;
            white = not(white);
        }
        if (c%2==0) white = not(white);
    }
    cout << result << endl;
    return 0;
}