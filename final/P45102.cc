#include <iostream>
using namespace std;

int operation(){
    string s, op, c;
    int num1, num2;
    cin >> s;
    if (s == "("){
        num1 = operation();
        cin >> op;
        num2 = operation();
        cin >> c;
    } else {
        return stoi(s);
    }

    if (op == "+") return num1 + num2;
    else if (op == "-") return num1 - num2;
    else return num1 * num2;
}

int main(){
    cout << operation() << endl;
    return 0;
}