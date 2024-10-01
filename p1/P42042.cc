#include <iostream>
using namespace std;

int main(){
    char c;
    int ascii_c;
    cin >> c;

    if (int(c) <= 90) cout << "uppercase" << endl;
    else cout << "lowercase" << endl;

    if (int(c) <= 90) ascii_c = int(c) + 32;
    else ascii_c = int(c);

    if (ascii_c == 97 or ascii_c == 101 or ascii_c == 105 or ascii_c == 111 or ascii_c == 117) cout << "vowel" << endl;
    else cout << "consonant" << endl;
    return 0;
}