#include <iostream>
using namespace std;

int main(){
    int f, c, result = 0;
    string n;
    cin >> f >> c;
    for (int i = 0; i < f; i++) {
        cin >> n;
        for (int j = 0; j < c; j++) {
            result += int(n[j])-48;
        }
    }
    cout << result << endl;
    return 0;
}