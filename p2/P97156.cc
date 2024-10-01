#include <iostream>
using namespace std;

int main(){
    int a, b;
    string result = "";
    cin >> a >> b;
    while (a <= b) {
        if (a != b) result += to_string(a) + ",";
        else result += to_string(a);
        a++;
    }
    cout << result << endl;
    return 0;
}