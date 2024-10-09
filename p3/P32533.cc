#include <iostream>
using namespace std;

int main(){
    int n, counter;
    bool second = false;
    cin >> n;
    counter = n-1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (counter <= j and not(second)) {
                cout << "/";
                second = true;
            }
            else if (second) cout << "*";
            else cout << "+";
        }
        counter--;
        second = false;
        cout << endl;
    }
    return 0;
}