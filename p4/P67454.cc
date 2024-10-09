#include <iostream>
using namespace std;

int main(){
    int count = 0;
    bool found = false;
    char c;
    cin >> c;
    while(c != '.') {
        if (c == 'a') count++;
        cin >> c;
    }
    cout << count << endl;
    return 0;
}
