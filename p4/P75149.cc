#include <iostream>
using namespace std;

int main(){
    bool found = false;
    char c;
    cin >> c;
    while(not(found) and c != '.') {
        if (c == 'a') found = true;
        else cin >> c;
    }
    if (found) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}