#include <iostream>
using namespace std;

int main(){
    char a, b, result;
    cin >> a >> b;
    if (a == b) result = '-';
    else if ((a == 'A' and b == 'P') or (a == 'P' and b == 'V') or (a == 'V' and b == 'A')) result = '1';
    else result = '2';
    cout << result << endl;
    return 0;
}