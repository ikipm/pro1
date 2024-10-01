#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if (int(c)>=97) cout << char(int(c)-32) << endl;
    else cout << char(int(c)+32) << endl;
    return 0;
}